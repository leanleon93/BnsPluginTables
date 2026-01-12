#pragma once
#include "../../EU/zonebasecamp/AAA_zonebasecamp_RecordBase.h"
#include "../../KR/zonebasecamp/AAA_zonebasecamp_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zonebasecamp_Record = BnsTables::KR::zonebasecamp_Record;
	#else
		using zonebasecamp_Record = BnsTables::EU::zonebasecamp_Record;
	#endif
}