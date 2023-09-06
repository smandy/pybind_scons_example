# SConstruct

import sysconfig

# TODO - split out complex number properly shouldn't be importing cpp's!
env = Environment(CXX='g++',
                  #CXXFLAGS=['-std=c++20', '-O3'],
                  SHLIBPREFIX = '',
                  CXXFLAGS=['-O3'],
                  CPPPATH=[ sysconfig.get_config_var('INCLUDEPY') ]
                  )

module = env.LoadableModule(target='pybind_complex', source = ['pybind_complex.cpp'] )
