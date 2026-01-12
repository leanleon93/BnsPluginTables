#pragma once
#include "../../EU/zoneenv2/zoneenv2_deck_Record.h"
#include "../../KR/zoneenv2/zoneenv2_deck_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_deck_Record = BnsTables::KR::zoneenv2_deck_Record;
	#else
		using zoneenv2_deck_Record = BnsTables::EU::zoneenv2_deck_Record;
	#endif
}