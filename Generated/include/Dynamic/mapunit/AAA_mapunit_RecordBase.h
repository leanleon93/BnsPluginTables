#pragma once
#include "../../EU/mapunit/AAA_mapunit_RecordBase.h"
#include "../../KR/mapunit/AAA_mapunit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_Record = BnsTables::KR::mapunit_Record;
	#else
		using mapunit_Record = BnsTables::EU::mapunit_Record;
	#endif
}