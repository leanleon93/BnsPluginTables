#pragma once
#include "../../EU/zoneenv2/zoneenv2_wall_Record.h"
#include "../../KR/zoneenv2/zoneenv2_wall_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_wall_Record = BnsTables::KR::zoneenv2_wall_Record;
	#else
		using zoneenv2_wall_Record = BnsTables::EU::zoneenv2_wall_Record;
	#endif
}