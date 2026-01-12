#pragma once
#include "../../EU/skill_combo_2/AAA_skill_combo_2_RecordBase.h"
#include "../../KR/skill_combo_2/AAA_skill_combo_2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_combo_2_Record = BnsTables::KR::skill_combo_2_Record;
	#else
		using skill_combo_2_Record = BnsTables::EU::skill_combo_2_Record;
	#endif
}