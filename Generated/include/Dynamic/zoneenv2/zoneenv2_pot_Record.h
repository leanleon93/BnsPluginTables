/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/zoneenv2/zoneenv2_pot_Record.h"
#include "../../KR/zoneenv2/zoneenv2_pot_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_pot_Record = BnsTables::KR::zoneenv2_pot_Record;
	#else
		using zoneenv2_pot_Record = BnsTables::EU::zoneenv2_pot_Record;
	#endif
}