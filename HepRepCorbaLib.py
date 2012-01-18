# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/HepRepCorba/HepRepCorbaLib.py,v 1.2 2008/09/02 11:22:07 ecephas Exp $
def generate(env, **kw):
    #if not kw.get('depsOnly', 0):
    #    env.Tool('addLibrary', library = ['HepRepCorba'])
    env.Tool('HepRepSvcLib')	
    env.Tool('addLibrary', library = env['OmniOrbLibs'])
    if env['PLATFORM'] == 'win32':
	env.Tool('addLibrary', library = ['oldnames'])
    
def exists(env):
    return 1;
