#pragma once
#include "../../EU/benefit_ability_set/AAA_benefit_ability_set_RecordBase.h"
#include "../../KR/benefit_ability_set/AAA_benefit_ability_set_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using benefit_ability_set_Record = BnsTables::KR::benefit_ability_set_Record;
	#else
		using benefit_ability_set_Record = BnsTables::EU::benefit_ability_set_Record;
	#endif
}