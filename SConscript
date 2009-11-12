# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/HepRepCorba/SConscript,v 1.9 2009/09/12 16:22:33 lsrea Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-04
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




