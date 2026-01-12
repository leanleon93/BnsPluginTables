#pragma once
#include "../../EU/zoneenv2/zoneenv2_fall_death_Record.h"
#include "../../KR/zoneenv2/zoneenv2_fall_death_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_fall_death_Record = BnsTables::KR::zoneenv2_fall_death_Record;
	#else
		using zoneenv2_fall_death_Record = BnsTables::EU::zoneenv2_fall_death_Record;
	#endif
}