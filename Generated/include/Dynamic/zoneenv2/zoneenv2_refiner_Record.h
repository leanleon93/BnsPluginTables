#pragma once
#include "../../EU/zoneenv2/zoneenv2_refiner_Record.h"
#include "../../KR/zoneenv2/zoneenv2_refiner_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_refiner_Record = BnsTables::KR::zoneenv2_refiner_Record;
	#else
		using zoneenv2_refiner_Record = BnsTables::EU::zoneenv2_refiner_Record;
	#endif
}