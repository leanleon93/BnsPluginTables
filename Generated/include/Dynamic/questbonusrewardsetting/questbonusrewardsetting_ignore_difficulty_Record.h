#pragma once
#include "../../EU/questbonusrewardsetting/questbonusrewardsetting_ignore_difficulty_Record.h"
#include "../../KR/questbonusrewardsetting/questbonusrewardsetting_ignore_difficulty_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using questbonusrewardsetting_ignore_difficulty_Record = BnsTables::KR::questbonusrewardsetting_ignore_difficulty_Record;
	#else
		using questbonusrewardsetting_ignore_difficulty_Record = BnsTables::EU::questbonusrewardsetting_ignore_difficulty_Record;
	#endif
}