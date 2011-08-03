# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.17 2011/07/15 23:39:34 lsrea Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-00-gr02
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()
# no progEnv because no programs

libEnv.Tool('addLinkDeps', package='HepRepCorba', toBuild='shared')
HepRepCorba = libEnv.SharedLibrary('HepRepCorba',
                                   listFiles(['src/*.cxx','src/*.cpp']))


libEnv.Tool('registerTargets', package = 'HepRepCorba',
             libraryCxts = [[HepRepCorba, libEnv]],
            includes = listFiles(['HepRepCorba/*.h']))




