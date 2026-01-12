/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/zoneenv2/zoneenv2_chest_Record.h"
#include "../../KR/zoneenv2/zoneenv2_chest_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_chest_Record = BnsTables::KR::zoneenv2_chest_Record;
	#else
		using zoneenv2_chest_Record = BnsTables::EU::zoneenv2_chest_Record;
	#endif
}