# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/HepRepCorba/HepRepCorbaLib.py,v 1.1 2008/08/15 21:42:35 ecephas Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['HepRepCorba'])
    env.Tool('HepRepSvcLib')	
    if env['PLATFORM'] == 'win32':
	env.Tool('addLibrary', library = ['oldnames'])
    
def exists(env):
    return 1;
