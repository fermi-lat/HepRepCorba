// This file is generated by omniidl (C++ backend)- omniORB_4_0. Do not edit.

#include "HepEventServer.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_0;



HepEventServer_ptr HepEventServer_Helper::_nil() {
  return ::HepEventServer::_nil();
}

CORBA::Boolean HepEventServer_Helper::is_nil(::HepEventServer_ptr p) {
  return CORBA::is_nil(p);

}

void HepEventServer_Helper::release(::HepEventServer_ptr p) {
  CORBA::release(p);
}

void HepEventServer_Helper::duplicate(::HepEventServer_ptr p) {
  if( p && !p->_NP_is_nil() )  omni::duplicateObjRef(p);
}

void HepEventServer_Helper::marshalObjRef(::HepEventServer_ptr obj, cdrStream& s) {
  ::HepEventServer::_marshalObjRef(obj, s);
}

HepEventServer_ptr HepEventServer_Helper::unmarshalObjRef(cdrStream& s) {
  return ::HepEventServer::_unmarshalObjRef(s);
}

HepEventServer_ptr
HepEventServer::_duplicate(::HepEventServer_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);

  return obj;
}


HepEventServer_ptr
HepEventServer::_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


HepEventServer_ptr
HepEventServer::_unchecked_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}


HepEventServer_ptr
HepEventServer::_nil()
{
  static _objref_HepEventServer* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_HepEventServer;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
}

const char* HepEventServer::_PD_repoId = "IDL:HepEventServer:1.0";


_objref_HepEventServer::~_objref_HepEventServer() {}


_objref_HepEventServer::_objref_HepEventServer(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::HepEventServer::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
_objref_HepEventServer::_ptrToObjRef(const char* id)
{
  if( id == ::HepEventServer::_PD_repoId )
    return (::HepEventServer_ptr) this;
  
  if( id == CORBA::Object::_PD_repoId )
    return (CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::HepEventServer::_PD_repoId) )
    return (::HepEventServer_ptr) this;
  
  if( omni::strMatch(id, CORBA::Object::_PD_repoId) )
    return (CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cstring_i_cstring
class _0RL_cd_DDA6AD98B427082D_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_DDA6AD98B427082D_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  CORBA::String_var arg_0_;
  const char* arg_0;
  CORBA::String_var result;
};

void _0RL_cd_DDA6AD98B427082D_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_DDA6AD98B427082D_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_DDA6AD98B427082D_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_DDA6AD98B427082D_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_DDA6AD98B427082D_00000000* tcd = (_0RL_cd_DDA6AD98B427082D_00000000*)cd;
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  tcd->result = impl->attach(tcd->arg_0);


}

char* _objref_HepEventServer::attach(const char* clientDesc)
{
  _0RL_cd_DDA6AD98B427082D_00000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_10000000, "attach", 7);
  _call_desc.arg_0 = clientDesc;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  _wvoid
class _0RL_cd_DDA6AD98B427082D_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_DDA6AD98B427082D_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 1, 0, 0, upcall) {}
  
  
    
  
  
};

// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  impl->release();


}

void _objref_HepEventServer::release()
{
  _0RL_cd_DDA6AD98B427082D_20000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_30000000, "release", 8);


  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_40000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_DDA6AD98B427082D_00000000* tcd = (_0RL_cd_DDA6AD98B427082D_00000000*)cd;
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  tcd->result = impl->setEvent(tcd->arg_0);


}

char* _objref_HepEventServer::setEvent(const char* eventID)
{
  _0RL_cd_DDA6AD98B427082D_00000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_40000000, "setEvent", 9);
  _call_desc.arg_0 = eventID;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  _clong
class _0RL_cd_DDA6AD98B427082D_50000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_DDA6AD98B427082D_50000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  CORBA::Long result;
};

void _0RL_cd_DDA6AD98B427082D_50000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_DDA6AD98B427082D_50000000::unmarshalReturnedValues(cdrStream& _n)
{
  (CORBA::Long&)result <<= _n;

}

// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_60000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_DDA6AD98B427082D_50000000* tcd = (_0RL_cd_DDA6AD98B427082D_50000000*)cd;
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  tcd->result = impl->getNumberOfEvents();


}

CORBA::Long _objref_HepEventServer::getNumberOfEvents()
{
  _0RL_cd_DDA6AD98B427082D_50000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_60000000, "getNumberOfEvents", 18);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_DDA6AD98B427082D_70000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_DDA6AD98B427082D_70000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  CORBA::String_var result;
};

void _0RL_cd_DDA6AD98B427082D_70000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_DDA6AD98B427082D_70000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_80000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_DDA6AD98B427082D_70000000* tcd = (_0RL_cd_DDA6AD98B427082D_70000000*)cd;
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  tcd->result = impl->getEventTitle();


}

char* _objref_HepEventServer::getEventTitle()
{
  _0RL_cd_DDA6AD98B427082D_70000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_80000000, "getEventTitle", 14);


  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  _cHepRep_i_cstring
class _0RL_cd_DDA6AD98B427082D_90000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_DDA6AD98B427082D_90000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, 0, 0, upcall) {}
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  CORBA::String_var arg_0_;
  const char* arg_0;
  HepRep_var result;
};

void _0RL_cd_DDA6AD98B427082D_90000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_DDA6AD98B427082D_90000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_DDA6AD98B427082D_90000000::marshalReturnedValues(cdrStream& _n)
{
  HepRep::_marshalObjRef(result,_n);

}

void _0RL_cd_DDA6AD98B427082D_90000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = HepRep::_unmarshalObjRef(_n);

}

// Local call call-back function.
static void
_0RL_lcfn_DDA6AD98B427082D_a0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_DDA6AD98B427082D_90000000* tcd = (_0RL_cd_DDA6AD98B427082D_90000000*)cd;
  _impl_HepEventServer* impl = (_impl_HepEventServer*) svnt->_ptrToInterface(HepEventServer::_PD_repoId);
  tcd->result = impl->getEventData(tcd->arg_0);


}

HepRep_ptr _objref_HepEventServer::getEventData(const char* dataFormat)
{
  _0RL_cd_DDA6AD98B427082D_90000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_a0000000, "getEventData", 13);
  _call_desc.arg_0 = dataFormat;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
_pof_HepEventServer::~_pof_HepEventServer() {}


omniObjRef*
_pof_HepEventServer::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::_objref_HepEventServer(ior, id);
}


CORBA::Boolean
_pof_HepEventServer::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::HepEventServer::_PD_repoId) )
    return 1;
  
  return 0;
}

const _pof_HepEventServer _the_pof_HepEventServer;

_impl_HepEventServer::~_impl_HepEventServer() {}


CORBA::Boolean
_impl_HepEventServer::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "attach") ) {

    _0RL_cd_DDA6AD98B427082D_00000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_10000000, "attach", 7, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "release") ) {

    _0RL_cd_DDA6AD98B427082D_20000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_30000000, "release", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "setEvent") ) {

    _0RL_cd_DDA6AD98B427082D_00000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_40000000, "setEvent", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getNumberOfEvents") ) {

    _0RL_cd_DDA6AD98B427082D_50000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_60000000, "getNumberOfEvents", 18, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getEventTitle") ) {

    _0RL_cd_DDA6AD98B427082D_70000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_80000000, "getEventTitle", 14, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getEventData") ) {

    _0RL_cd_DDA6AD98B427082D_90000000 _call_desc(_0RL_lcfn_DDA6AD98B427082D_a0000000, "getEventData", 13, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
_impl_HepEventServer::_ptrToInterface(const char* id)
{
  if( id == ::HepEventServer::_PD_repoId )
    return (_impl_HepEventServer*) this;
  
  if( id == CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::HepEventServer::_PD_repoId) )
    return (_impl_HepEventServer*) this;
  
  if( omni::strMatch(id, CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
_impl_HepEventServer::_mostDerivedRepoId()
{
  return ::HepEventServer::_PD_repoId;
}

POA_HepEventServer::~POA_HepEventServer() {}

