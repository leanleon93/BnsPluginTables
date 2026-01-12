#pragma once
#include "../../EU/battle_field_grade/AAA_battle_field_grade_RecordBase.h"
#include "../../KR/battle_field_grade/AAA_battle_field_grade_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using battle_field_grade_Record = BnsTables::KR::battle_field_grade_Record;
	#else
		using battle_field_grade_Record = BnsTables::EU::battle_field_grade_Record;
	#endif
}