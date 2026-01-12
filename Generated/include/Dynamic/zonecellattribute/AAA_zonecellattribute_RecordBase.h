#pragma once
#include "../../EU/zonecellattribute/AAA_zonecellattribute_RecordBase.h"
#include "../../KR/zonecellattribute/AAA_zonecellattribute_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonecellattribute_Record = BnsTables::KR::zonecellattribute_Record;
	#else
		using zonecellattribute_Record = BnsTables::EU::zonecellattribute_Record;
	#endif
}