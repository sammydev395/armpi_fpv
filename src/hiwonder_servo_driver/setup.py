#!/usr/bin/env python3

from setuptools import setup

package_name = 'hiwonder_servo_driver'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    package_dir={'': 'src'},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lucas',
    maintainer_email='lucas@todo.todo',
    description='Hiwonder Servo Driver package for ROS 2',
    license='BSD',
    tests_require=['pytest'],
)
