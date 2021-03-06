// An HepEvent server; mainly derived from Joseph Perl one .. 
/// adapted for GLAST and GAUDI framework
/// This is a test server; needs lot of work
//
#include "HepRep_impl.hh"
#include "HepEventServer_impl.h"
#include <iostream>
#include <string>

#include <sstream>


HepEventServer_impl::HepEventServer_impl (ISvcAdapter* sa, IRegistry* r)
{
  m_svcAdapter = sa;
  m_registry = r;
  _busy = false;
  // Parse arguments.
  _singleUse = false;
  _defaultEventID = new char[1];
  strcpy(_defaultEventID,"");
}


HepEventServer_impl::~HepEventServer_impl ()
{

}


// Initialize the server
void HepEventServer_impl::initHepRep()
{

  // Instantiate the HepRep CORBA implementation.
  hepRep_impl = new HepRep_impl();
  _hepRep_var = hepRep_impl -> _this();

  hepRep_impl->setRegistry(m_registry);

}


char* HepEventServer_impl::attach(const char* clientDesc)
{
  if (_busy) {
    return CORBA::string_dup("server unavailable: busy with another client");
  } else {
    _busy = true;
    
    _clientDesc = new char[strlen(clientDesc) + 1];
    strcpy(_clientDesc, clientDesc);

    //int descLength = 96;

    std::string serverDesc;
    serverDesc = 
      "GlastServer version=0.1;dataFormat=heprep2;setEventCommand=" + m_svcAdapter->getCommands();
    
    std::cout << "Wow, I've been requested by " 
              << _clientDesc << std::endl;

    std::cout << "Replied with " << serverDesc << std::endl;

    return CORBA::string_dup(serverDesc.c_str());
  }
}


void HepEventServer_impl::release()
{
  _busy = false;
  std::cout << "I've been abandoned" << std::endl;
}


/// Set the event to the command 
char* HepEventServer_impl::setEvent(const char* command)
{
  // This method is used by now to send command to the server (since in the
  // original implementation of the HepEventServer interface there is not such a
  // method, we decided with Joseph to use setEvent). It accept a string and
  // return a string. For now 4 commands are supported: 1) next -> step to the
  // next event 2) fluxes -> return a list of known fluxes (the list names are
  // separated by ";") 3) source:xxx -> set the FluxSource to xxx 4) eventName
  // -> return the actual event name (for now this name is just Event-x, with x
  // an increasing number; this will be changed in future release).
  std::stringstream sName;
  static int temp = 0;
  std::string cmd(command);
    
  //static unsigned int i = 0;
  
  std::string nextEventMsg; 
  
  if (cmd == "next")
    {
      bool res;
      res = m_svcAdapter->nextEvent(1);
      if (res)
      {
          std::string evtId = m_svcAdapter->getEventId();
          //sName << evtId;
          sName << "Event-" << temp;
        temp++;

        m_eventID = sName.str();
        m_eventID = evtId;
        nextEventMsg = "ok:" + m_eventID;  

      } 
      else
      {
        nextEventMsg = "error";
      }
    }
  else if (cmd =="back")
  {
    if (m_svcAdapter->previousEvent(1))
      nextEventMsg = "ok: got the previous event";
    else 
      nextEventMsg = "Error:";
  }
  else if (cmd == "getEventId")
  {
    nextEventMsg = m_svcAdapter->getEventId();
  }
  else if (cmd == "commands")
  {
    nextEventMsg = m_svcAdapter->getCommands();
  }
  else if (cmd.substr(0,8) == "eventId:")
  {
    int run, event;
    sscanf(cmd.c_str(), "eventId:%d-%d", &run, &event);
    if (m_svcAdapter->setEventId(run, event))
      nextEventMsg = "ok:Event set to the requested ID";
    else
      nextEventMsg = "error:The requested Event ID seems to non exist";      
  }
  else if (cmd.substr(0,9) == "eventIdx:")
  {
    int idx;
    sscanf(cmd.c_str(), "eventIdx:%d", &idx);
    if (m_svcAdapter->setEventIndex(idx))
      nextEventMsg = "ok:Event set to the requested index";
    else
      nextEventMsg = "error:The requested Event index seems to non exist";      
  }  
  else if (cmd.substr(0,18) == "open:rootfilename:") {
    std::string temp = cmd.substr(18,cmd.size());   
    std::string temp2,temp3,temp4,temp5;
    std::string mc;
    std::string digi;
    std::string recon;
    std::string relation;
    std::string gcr;

    int i = temp.find(";");
    if(i >=0 )
    {
      mc=temp.substr(0,i);
      temp2 = temp.substr(i+1,temp.size());
      i = temp2.find(";");
      digi=temp2.substr(0,i);
      //recon = temp2.substr(i+1,temp2.size());
      temp3 = temp2.substr(i+1,temp2.size());
      i = temp3.find(";");
      recon=temp3.substr(0,i);
      temp4 = temp3.substr(i+1,temp3.size());
      i = temp4.find(";");
      relation=temp4.substr(0,i);
      temp5 = temp4.substr(i+1,temp4.size());
      i = temp5.find(";");
      gcr=temp5.substr(0,i);
     
    } 
    else 
      nextEventMsg = "error:Incorrect command format";      

    if (m_svcAdapter->openFile(mc.c_str(), digi.c_str(), recon.c_str(), relation.c_str(), gcr.c_str()))
      nextEventMsg = "ok:Set ROOT files";
    else
      nextEventMsg = "error:The requested ROOT files seem to non exist";      
  }
  else if (cmd == "fluxes")
    {
      nextEventMsg = m_svcAdapter->getSources();
    }
  else if (cmd.substr(0,7) == "source:")
    {
      std::string source = cmd.substr(7,cmd.size());

      m_svcAdapter->setSource(source);
      nextEventMsg = "ok:Source changed to " + source;      
    }
  else if (cmd == "eventName")
    {
      nextEventMsg = m_eventID.c_str();
    }
  else if (cmd.substr(0,8) == "algProp:")
  {
    std::string temp = cmd.substr(8,cmd.size());   
    std::string temp2;
    std::string alg;
    std::string prop;
    std::string value;

    int i = temp.find(":");
    if(i >=0 )
    {
      alg=temp.substr(0,i);
      temp2 = temp.substr(i+1,temp.size());
      i = temp2.find(":");
      prop=temp2.substr(0,i);
      value = temp2.substr(i+1,temp2.size());
    }  

    
    if (m_svcAdapter->setAlgProperty(alg, prop, value))
    {
      nextEventMsg = "ok: managed to set the propery";
    }
    else
    {
      nextEventMsg = "error: not managed to set the propery";          
    }
  }
  else if (cmd.substr(0,10) == "algReplay:")
    {
      std::string algName = cmd.substr(10,cmd.size());

      if (m_svcAdapter->replayAlgorithm(algName))
        nextEventMsg = "ok:Aglrotithm " + algName + " replayed";      
      else
        nextEventMsg = "error:Aglrotithm " + algName + " not replayed";      
    } 
  else if (cmd == "stop")
    {
      m_svcAdapter->shutDown();
      nextEventMsg = "Server stop";
    }
  else
    {
      nextEventMsg = "error:don't know the message ..\n";      
    }

  return CORBA::string_dup(nextEventMsg.c_str());
}


// Return the number of events (if known); disabled for now
CORBA::Long HepEventServer_impl::getNumberOfEvents()
{
  return m_svcAdapter->getNumberOfEvents();
}


// Return the title of the current event
char* HepEventServer_impl::getEventTitle()
{
    // std::string evtId = m_svcAdapter->getEventId();
    return CORBA::string_dup((m_eventID).c_str());
}




CORBA::Any* HepEventServer_impl::getEventData (const char* dataFormat)
{
  std::cout << "I've just given to " << _clientDesc << " an HepRep object" << std::endl;

  CORBA::Any* _dupEventData_var = new CORBA::Any();

  if ((dataFormat = "HepRep"))
    *_dupEventData_var <<= HepRep::_duplicate (_hepRep_var);
  else
    *_dupEventData_var <<= "error: unsupported data format";
  return _dupEventData_var;
}


