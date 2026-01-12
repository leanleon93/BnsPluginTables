#pragma once
#include "../../EU/faction/AAA_faction_RecordBase.h"
#include "../../KR/faction/AAA_faction_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using faction_Record = BnsTables::KR::faction_Record;
	#else
		using faction_Record = BnsTables::EU::faction_Record;
	#endif
}