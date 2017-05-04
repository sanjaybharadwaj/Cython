from distutils.core import setup
from Cython.Build import cythonize
from os import environ

environ["CXX"]="g++"
environ["CC"]="gcc"

setup(ext_modules = cythonize(
           "derived.pyx",                 # our Cython source # additional source file(s)
           language="c++",             # generate C++ code
      ))
