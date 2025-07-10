from setuptools import find_packages
from setuptools import setup

setup(
    name='hiwonder_servo_driver',
    version='0.0.1',
    packages=find_packages(
        include=('hiwonder_servo_driver', 'hiwonder_servo_driver.*')),
)
