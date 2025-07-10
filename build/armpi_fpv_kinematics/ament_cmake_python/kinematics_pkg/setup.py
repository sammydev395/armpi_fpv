from setuptools import find_packages
from setuptools import setup

setup(
    name='kinematics_pkg',
    version='0.0.1',
    packages=find_packages(
        include=('kinematics_pkg', 'kinematics_pkg.*')),
)
