#pragma once
#include "../../EU/mapinfo/AAA_mapinfo_RecordBase.h"
#include "../../KR/mapinfo/AAA_mapinfo_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapinfo_Record = BnsTables::KR::mapinfo_Record;
	#else
		using mapinfo_Record = BnsTables::EU::mapinfo_Record;
	#endif
}