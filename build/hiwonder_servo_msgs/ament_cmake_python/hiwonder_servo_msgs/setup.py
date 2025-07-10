from setuptools import find_packages
from setuptools import setup

setup(
    name='hiwonder_servo_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('hiwonder_servo_msgs', 'hiwonder_servo_msgs.*')),
)
