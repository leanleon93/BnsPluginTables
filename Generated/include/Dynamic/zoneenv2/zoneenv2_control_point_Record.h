#pragma once
#include "../../EU/zoneenv2/zoneenv2_control_point_Record.h"
#include "../../KR/zoneenv2/zoneenv2_control_point_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_control_point_Record = BnsTables::KR::zoneenv2_control_point_Record;
	#else
		using zoneenv2_control_point_Record = BnsTables::EU::zoneenv2_control_point_Record;
	#endif
}