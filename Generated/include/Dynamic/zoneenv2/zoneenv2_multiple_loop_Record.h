#pragma once
#include "../../EU/zoneenv2/zoneenv2_multiple_loop_Record.h"
#include "../../KR/zoneenv2/zoneenv2_multiple_loop_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_multiple_loop_Record = BnsTables::KR::zoneenv2_multiple_loop_Record;
	#else
		using zoneenv2_multiple_loop_Record = BnsTables::EU::zoneenv2_multiple_loop_Record;
	#endif
}