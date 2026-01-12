#pragma once
#include "../../EU/zonecampfire/AAA_zonecampfire_RecordBase.h"
#include "../../KR/zonecampfire/AAA_zonecampfire_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonecampfire_Record = BnsTables::KR::zonecampfire_Record;
	#else
		using zonecampfire_Record = BnsTables::EU::zonecampfire_Record;
	#endif
}