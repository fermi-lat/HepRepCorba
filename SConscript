# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.11.18.1 2010/09/20 16:05:43 heather Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-05-gr02
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




