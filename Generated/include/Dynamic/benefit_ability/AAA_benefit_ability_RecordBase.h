/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/benefit_ability/AAA_benefit_ability_RecordBase.h"
#include "../../KR/benefit_ability/AAA_benefit_ability_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using benefit_ability_Record = BnsTables::KR::benefit_ability_Record;
	#else
		using benefit_ability_Record = BnsTables::EU::benefit_ability_Record;
	#endif
}