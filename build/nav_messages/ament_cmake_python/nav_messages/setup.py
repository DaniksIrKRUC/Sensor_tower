from setuptools import find_packages
from setuptools import setup

setup(
    name='nav_messages',
    version='1.0.0',
    packages=find_packages(
        include=('nav_messages', 'nav_messages.*')),
)
