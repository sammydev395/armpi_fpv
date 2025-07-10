#!/usr/bin/env python3
# encoding: utf-8
import os
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import ujson
import threading

from hiwonder_servo_msgs.action import ActionGroupRunner
from hiwonder_servo_msgs.msg import ActionGroupRunnerFeedback
from hiwonder_servo_msgs.msg import ActionGroupRunnerResult


class ActionGroupRunnerNode(Node):
    def __init__(self,
                 controller_namespace="ActionGroupRunner",
                 set_multi_pos=(lambda x: None),
                 path="/home/ubuntu/ActionGroups"):
        super().__init__('action_group_runner')
        self.controller_namespace = controller_namespace
        self.set_multi_pos = set_multi_pos
        self.lock = threading.Lock()
        self.path = path
        self.action_server = ActionServer(self, ActionGroupRunner, self.controller_namespace,
                                          self.process_action_group_run)

    """
        检查文件是否为合法的动作组文件
    """
    def get_actions_from_file(self, file_name):
        path = os.path.join(self.path, file_name)
        ret = None
        try:
            with open(path, 'r') as f:
                content = ujson.loads(f.read())
                actions = content['Actions']
                acts = []
                for action in actions:
                    joints = action['Joints']
                    ids = tuple(joints.keys())
                    duration = action['Duration']
                    acts.append((duration, tuple(map(lambda id_: (int(id_), joints[id_], duration), ids))))
                ret = acts
        except Exception as e:
            self.get_logger().error("")
            print(e)
        return ret

    def start(self):
        # Action server starts automatically in ROS 2
        pass

    def runner(self, act_s, repeat=1, goal_handle=None):
        print("running")
        for i in range(repeat):
            step = 0
            for act in act_s:
                if goal_handle and goal_handle.is_cancel_requested:
                    return 2
                dur_, pos_ = act
                try:
                    self.set_multi_pos(pos_)
                except Exception as e:
                    print("set mult pos failed" + str(e))
                    return 3
                if goal_handle:
                    feedback = ActionGroupRunnerFeedback()
                    feedback.step = step
                    goal_handle.publish_feedback(feedback)
                rclpy.sleep(dur_ / 1000.0)
                step += 1
        return 1

    def process_action_group_run(self, goal_handle):
        goal = goal_handle.request
        name = goal.name
        repeat = goal.repeat
        
        feedback = ActionGroupRunnerFeedback()
        feedback.name = name
        
        result = ActionGroupRunnerResult()
        result.name = name

        '''所有动作组文件均以".json"结束，对不以".json"结束的动作组尝试运行命令，命令若有参数需要传入的使用'|'符号将命令与参数分隔'''
        print(name)
        print(repeat)
        success = 0
        with self.lock:
            act_s = self.get_actions_from_file(name)
            if act_s is not None:
                success = self.runner(act_s, repeat, goal_handle)
            if success == 1:
                result.result = "success"
                goal_handle.succeed()
                return result
            elif success == 2:
                result.result = "cancel"
                goal_handle.canceled()
                return result
            else:
                result.result = "aborted"
                goal_handle.abort()
                return result

