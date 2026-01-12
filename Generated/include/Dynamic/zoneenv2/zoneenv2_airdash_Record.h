#pragma once
#include "../../EU/zoneenv2/zoneenv2_airdash_Record.h"
#include "../../KR/zoneenv2/zoneenv2_airdash_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_airdash_Record = BnsTables::KR::zoneenv2_airdash_Record;
	#else
		using zoneenv2_airdash_Record = BnsTables::EU::zoneenv2_airdash_Record;
	#endif
}