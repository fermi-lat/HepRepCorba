# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/SConscript,v 1.4.94.2.2.2 2012/02/17 21:22:49 heather Exp $
# Authors: Riccardo Giannitrapani <riccardo@fisica.uniud.it>
# Version: HepRepCorba-03-01-00-gr05
Import('baseEnv')
Import('listFiles')
Import('packages')
import sys
libEnv = baseEnv.Clone()
# no progEnv because no programs

libEnv.Tool('addLinkDeps', package='HepRepCorba', toBuild='component')

if sys.platform == 'win32' :
    libEnv.AppendUnique(CPPDEFINES = ['__WIN32__', '__x86__', '__NT__', '_OMNITHREAD_DLL'])
    libEnv.AppendUnique(CPPDEFINES = ['_WIN32_WINNT=0x0400'])

else:
    libEnv.AppendUnique(CPPDEFINES = ['G4USE_STD_NAMESPACE', 'OMNITHREAD_DLL' ])
    
HepRepCorba = libEnv.ComponentLibrary('HepRepCorba',
                                      listFiles(['src/*.cxx','src/*.cpp']))


libEnv.Tool('registerTargets', package = 'HepRepCorba',
             libraryCxts = [[HepRepCorba, libEnv]],
            includes = listFiles(['HepRepCorba/*.h']))




