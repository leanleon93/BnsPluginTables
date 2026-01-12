#pragma once
#include "../../EU/zonepcspawn/AAA_zonepcspawn_RecordBase.h"
#include "../../KR/zonepcspawn/AAA_zonepcspawn_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonepcspawn_Record = BnsTables::KR::zonepcspawn_Record;
	#else
		using zonepcspawn_Record = BnsTables::EU::zonepcspawn_Record;
	#endif
}