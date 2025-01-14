///////////////////////////////////////////////////////////////////////////////
// MyFirstTrafoClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "MyFirstTrafoClassFactory.h"
#include "MyFirstTrafoServices.h"
#include "MyFirstTrafoVersion.h"
#include "MyFirstTrafo.h"

BEGIN_CLASS_MAP(CMyFirstTrafoClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY_LIB(VID_MyFirstTrafo, CID_MyFirstTrafoCMyFirstTrafo, SRVNAME_MYFIRSTTRAFO "!CMyFirstTrafo", CMyFirstTrafo)
///</AutoGeneratedContent>
END_CLASS_MAP()

CMyFirstTrafoClassFactory::CMyFirstTrafoClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME_TMX(SRVNAME_MYFIRSTTRAFO));
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(MyFirstTrafo));
#endif //defined(TCDBG_UNIT_VERSION)
}

