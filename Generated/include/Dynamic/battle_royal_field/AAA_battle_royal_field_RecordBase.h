#pragma once
#include "../../EU/battle_royal_field/AAA_battle_royal_field_RecordBase.h"
#include "../../KR/battle_royal_field/AAA_battle_royal_field_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using battle_royal_field_Record = BnsTables::KR::battle_royal_field_Record;
	#else
		using battle_royal_field_Record = BnsTables::EU::battle_royal_field_Record;
	#endif
}