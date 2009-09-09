# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.6 2009/09/09 17:51:26 lsrea Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-02
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('HepRepCorbaLib', depsOnly = 1)
HepRepCorba = libEnv.SharedLibrary('HepRepCorba', listFiles(['src/*.cxx','src/*.cpp']))


progEnv.Tool('HepRepCorbaLib')

progEnv.Tool('registerObjects', package = 'HepRepCorba', libraries = [HepRepCorba], includes = listFiles(['HepRepCorba/*.h']))




