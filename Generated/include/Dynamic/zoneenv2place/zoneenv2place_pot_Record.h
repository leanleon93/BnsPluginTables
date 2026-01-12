#pragma once
#include "../../EU/zoneenv2place/zoneenv2place_pot_Record.h"
#include "../../KR/zoneenv2place/zoneenv2place_pot_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2place_pot_Record = BnsTables::KR::zoneenv2place_pot_Record;
	#else
		using zoneenv2place_pot_Record = BnsTables::EU::zoneenv2place_pot_Record;
	#endif
}