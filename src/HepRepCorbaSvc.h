
#ifndef HEPREPCORBASVC_H
#define HEPREPCORBASVC_H 1

/** 
 * @class HepRepCorbaSvc
 *
 * @brief Load IRegister tools defined in HepRepSvc
 *
 * 
 * @author Heather Kelly 
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/src/HepRepCorbaSvc.h,v 1.1 2012/02/02 17:54:32 heather Exp $
 */

#include "HepRepSvc/IRegister.h"
#include "GaudiKernel/Service.h"

class HepRepCorbaSvc : public Service
{
public:
    
    HepRepCorbaSvc(const std::string& name, ISvcLocator* pSvcLocator); 
    virtual ~HepRepCorbaSvc() {}
    
    StatusCode initialize();
    StatusCode finalize();
    
//    StatusCode queryInterface(const InterfaceID& riid, void** ppvUnknown);

//    static const InterfaceID& interfaceID() {
//        return IHepRepCorbaSvc::interfaceID(); 
//    }
    /// return the service type
//    const InterfaceID& type() const;

private:

    IRegister *m_xmlTool;


};

#endif // DETDISPLAYSVC_H
