# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.8 2009/09/10 21:29:48 lsrea Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-04
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('HepRepCorbaLib', depsOnly = 1)
HepRepCorba = libEnv.SharedLibrary('HepRepCorba', listFiles(['src/*.cxx','src/*.cpp']))


progEnv.Tool('HepRepCorbaLib')

progEnv.Tool('registerObjects', package = 'HepRepCorba', libraries = [HepRepCorba], includes = listFiles(['HepRepCorba/*.h']))




