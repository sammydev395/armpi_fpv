import select
import netaddr
import netifaces
import threading
from socket import *

class thread_with_result(threading.Thread):
    def __init__(self, func, args=()):
        super(thread_with_result, self).__init__()
        self.func = func
        self.args = args
    def run(self):
        self.result = self.func(*self.args)
    def get_result(self):
        try:
            return self.result
        except Exception:
            return None

def get_ipaddress():
    interfaces = netifaces.interfaces()
    status_list = []
    for i in interfaces:
        try:
            n = netifaces.ifaddresses(i)[netifaces.AF_INET]
            if netaddr.IPAddress(n[0]['addr']).is_private():
                status_list.append(n[0]['broadcast'])
        except:
            continue
    #print(status_list)
    return status_list

def scan_device(device_name, host, timeout_=5):
    port = 9027
    addr = (host, port)
    sock = socket(AF_INET, SOCK_DGRAM)
    sock.bind(('', 0))
    sock.setsockopt(SOL_SOCKET, SO_BROADCAST, 1)
    print("Scanning...")
    sock.sendto("LOBOT_NET_DISCOVER".encode("utf-8"), addr)
    device_list = []
    while True:
        infds, outfds, errfds = select.select([sock, ], [], [], timeout_)
        if len(infds) != 0:
            #print(infds)
            (data, addr_) = sock.recvfrom(1024)
            source_ip = addr_[0]
            strs = str(data, encoding='utf-8').replace('\n', '').replace("ARMPIFPV", "ArmPi_FPV").split(':')
            # print(len(strs), len(strs[1]), strs[0][:9], source_ip)
            if len(strs) == 2 and strs[0][:9] == device_name and source_ip[:11] == '192.168.149':
                device_list.append((strs[0][:9], strs[1], source_ip))
        else:
            break
    print("Scanning Finished")

    return device_list

def scan_device_all(device_name):
    threads = []
    host_list = get_ipaddress()
    devices = []
    for host in host_list:
        thread = thread_with_result(scan_device, (device_name, host, 5,))
        thread.setDaemon(True)
        threads.append(thread)
    for thread in threads:
        thread.start()
    for thread in threads:
        thread.join()
    for thread in threads:
        devices.extend(thread.get_result())

    return devices

if __name__ == "__main__":
    l = scan_device_all('ArmPi_FPV')
    # print(l)

