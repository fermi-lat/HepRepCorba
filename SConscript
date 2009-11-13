# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/HepRepCorba/SConscript,v 1.10 2009/11/12 01:59:59 jrb Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-05
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()
# no progEnv because no programs

libEnv.Tool('HepRepCorbaLib', depsOnly = 1)
HepRepCorba = libEnv.SharedLibrary('HepRepCorba',
                                   listFiles(['src/*.cxx','src/*.cpp']))


libEnv.Tool('registerTargets', package = 'HepRepCorba',
             libraryCxts = [[HepRepCorba, libEnv]],
            includes = listFiles(['HepRepCorba/*.h']))




