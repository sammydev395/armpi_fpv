#!/usr/bin/env python3

from setuptools import setup

package_name = 'kinematics_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    package_dir={'': '.'},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hiwonder',
    maintainer_email='hiwonder@todo.todo',
    description='Armpi FPV Kinematics package for ROS 2',
    license='BSD',
    tests_require=['pytest'],
)

