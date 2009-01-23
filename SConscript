# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/HepRepCorba/SConscript,v 1.2 2008/10/17 04:30:18 glastrm Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-02-00-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('HepRepCorbaLib', depsOnly = 1)
HepRepCorba = libEnv.SharedLibrary('HepRepCorba', listFiles(['src/*.cxx','src/*.cpp']))


progEnv.Tool('HepRepCorbaLib')

progEnv.Tool('registerObjects', package = 'HepRepCorba', libraries = [HepRepCorba], includes = listFiles(['HepRepCorba/*.h']))




