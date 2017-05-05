from distutils.core import setup
from Cython.Build import cythonize
from os import environ

environ["CXX"]="g++"
environ["CC"]="gcc"

setup(ext_modules = cythonize(
           ['*.pyx', '*.pxd'],
           language="c++",             # generate C++ code
      ))
