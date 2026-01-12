#pragma once
#include "../../EU/zonerespawn/AAA_zonerespawn_RecordBase.h"
#include "../../KR/zonerespawn/AAA_zonerespawn_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonerespawn_Record = BnsTables::KR::zonerespawn_Record;
	#else
		using zonerespawn_Record = BnsTables::EU::zonerespawn_Record;
	#endif
}