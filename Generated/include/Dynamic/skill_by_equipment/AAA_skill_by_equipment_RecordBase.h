/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/skill_by_equipment/AAA_skill_by_equipment_RecordBase.h"
#include "../../KR/skill_by_equipment/AAA_skill_by_equipment_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_by_equipment_Record = BnsTables::KR::skill_by_equipment_Record;
	#else
		using skill_by_equipment_Record = BnsTables::EU::skill_by_equipment_Record;
	#endif
}