#pragma once
#include "../../EU/battle_royal_field_event/AAA_battle_royal_field_event_RecordBase.h"
#include "../../KR/battle_royal_field_event/AAA_battle_royal_field_event_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using battle_royal_field_event_Record = BnsTables::KR::battle_royal_field_event_Record;
	#else
		using battle_royal_field_event_Record = BnsTables::EU::battle_royal_field_event_Record;
	#endif
}