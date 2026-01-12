#pragma once
#include "../../EU/zoneenv2place/zoneenv2place_wall_Record.h"
#include "../../KR/zoneenv2place/zoneenv2place_wall_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2place_wall_Record = BnsTables::KR::zoneenv2place_wall_Record;
	#else
		using zoneenv2place_wall_Record = BnsTables::EU::zoneenv2place_wall_Record;
	#endif
}