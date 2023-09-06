# SConstruct

import os
import sys
import distutils

import sysconfig

print( "Version is %s" % sysconfig.get_config_var('VERSION'))

env = Environment(CXX='g++',
                  #CXXFLAGS=['-std=c++20', '-O3'],
                  CXXFLAGS=['-O3'],
                  LINKFLAGS=['-L/usr/lib', '-dl', '-lm', '-fPIC'],
                  SHLIBPREFIX='',
                  CPPPATH=[ sysconfig.get_config_var('INCLUDEPY') ]
                   )

# Specify source files
# Create a shared library
#complex = env.SharedObject( 'pybind_complex.cpp')

# Define a clean target
#Clean(module, BUILD_DIR)

module = env.LoadableModule(target='pybind_complex', source = ['pybind_complex.cpp'] )


# Print a message
print("Build completed successfully!")

