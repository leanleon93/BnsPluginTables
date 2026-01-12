#pragma once
#include "../../EU/zoneenv2/zoneenv2_portal_Record.h"
#include "../../KR/zoneenv2/zoneenv2_portal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_portal_Record = BnsTables::KR::zoneenv2_portal_Record;
	#else
		using zoneenv2_portal_Record = BnsTables::EU::zoneenv2_portal_Record;
	#endif
}