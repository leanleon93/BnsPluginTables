#pragma once
#include "../../EU/zoneenv2/zoneenv2_effect_region_Record.h"
#include "../../KR/zoneenv2/zoneenv2_effect_region_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_effect_region_Record = BnsTables::KR::zoneenv2_effect_region_Record;
	#else
		using zoneenv2_effect_region_Record = BnsTables::EU::zoneenv2_effect_region_Record;
	#endif
}