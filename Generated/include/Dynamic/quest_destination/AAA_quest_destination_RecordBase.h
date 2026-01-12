#pragma once
#include "../../EU/quest_destination/AAA_quest_destination_RecordBase.h"
#include "../../KR/quest_destination/AAA_quest_destination_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_destination_Record = BnsTables::KR::quest_destination_Record;
	#else
		using quest_destination_Record = BnsTables::EU::quest_destination_Record;
	#endif
}