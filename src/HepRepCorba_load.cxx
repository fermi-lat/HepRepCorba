/** 

*  $Header: /nfs/slac/g/glast/ground/cvs/HepRepCorba/src/HepRepCorba_load.cxx,v 1.1.1.1 2003/07/07 09:01:01 riccardo Exp $
*/

#include "GaudiKernel/DeclareFactoryEntries.h"
#include "GaudiKernel/IToolFactory.h"

DECLARE_FACTORY_ENTRIES(HepRepCorba) {
  DECLARE_TOOL(RegisterCorba);
}

