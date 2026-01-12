#pragma once
#include "../../EU/questbonusrewardsetting/questbonusrewardsetting_difficulty_type_Record.h"
#include "../../KR/questbonusrewardsetting/questbonusrewardsetting_difficulty_type_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using questbonusrewardsetting_difficulty_type_Record = BnsTables::KR::questbonusrewardsetting_difficulty_type_Record;
	#else
		using questbonusrewardsetting_difficulty_type_Record = BnsTables::EU::questbonusrewardsetting_difficulty_type_Record;
	#endif
}