#pragma once
#include "../../EU/quest_transit/AAA_quest_transit_RecordBase.h"
#include "../../KR/quest_transit/AAA_quest_transit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_transit_Record = BnsTables::KR::quest_transit_Record;
	#else
		using quest_transit_Record = BnsTables::EU::quest_transit_Record;
	#endif
}