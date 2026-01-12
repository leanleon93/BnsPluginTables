#pragma once
#include "../../EU/stancetransit/AAA_stancetransit_RecordBase.h"
#include "../../KR/stancetransit/AAA_stancetransit_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using stancetransit_Record = BnsTables::KR::stancetransit_Record;
	#else
		using stancetransit_Record = BnsTables::EU::stancetransit_Record;
	#endif
}