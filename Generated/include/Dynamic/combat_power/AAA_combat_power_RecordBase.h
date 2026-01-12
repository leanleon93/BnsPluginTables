#pragma once
#include "../../EU/combat_power/AAA_combat_power_RecordBase.h"
#include "../../KR/combat_power/AAA_combat_power_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using combat_power_Record = BnsTables::KR::combat_power_Record;
	#else
		using combat_power_Record = BnsTables::EU::combat_power_Record;
	#endif
}