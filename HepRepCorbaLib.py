# $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/HepRepCorbaLib.py,v 1.3 2012/01/18 01:25:36 jrb Exp $
def generate(env, **kw):
    #if not kw.get('depsOnly', 0):
    #    env.Tool('addLibrary', library = ['HepRepCorba'])
    env.Tool('HepRepSvcLib')	
    env.Tool('addLibrary', library = env['OmniOrbLibs'])
    if env['PLATFORM'] == 'win32':
	env.Tool('addLibrary', library = ['oldnames'])
    
def exists(env):
    return 1;
