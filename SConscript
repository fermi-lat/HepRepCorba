# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.1 2008/08/15 21:22:42 ecephas Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-00-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('HepRepCorbaLib', depsOnly = 1)
HepRepCorba = libEnv.SharedLibrary('HepRepCorba', listFiles(['src/*.cxx','src/*.cpp']))


progEnv.Tool('HepRepCorbaLib')

progEnv.Tool('registerObjects', package = 'HepRepCorba', libraries = [HepRepCorba], includes = listFiles(['HepRepCorba/*.h']))
