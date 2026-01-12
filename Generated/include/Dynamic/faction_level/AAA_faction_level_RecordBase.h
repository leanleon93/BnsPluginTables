/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/faction_level/AAA_faction_level_RecordBase.h"
#include "../../KR/faction_level/AAA_faction_level_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using faction_level_Record = BnsTables::KR::faction_level_Record;
	#else
		using faction_level_Record = BnsTables::EU::faction_level_Record;
	#endif
}