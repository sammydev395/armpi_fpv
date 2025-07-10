#!/usr/bin/env python3

from setuptools import setup
import os
from glob import glob

package_name = 'hiwonder_servo_controllers'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    package_dir={'': 'src'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lucas',
    maintainer_email='lucas@todo.todo',
    description='Hiwonder Servo Controllers package for ROS 2',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'controller_manager = hiwonder_servo_controllers.controller_manager:main',
            'joint_state_publisher = hiwonder_servo_controllers.joint_state_publisher:main',
        ],
    },
)
