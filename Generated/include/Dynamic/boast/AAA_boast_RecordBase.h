#pragma once
#include "../../EU/boast/AAA_boast_RecordBase.h"
#include "../../KR/boast/AAA_boast_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using boast_Record = BnsTables::KR::boast_Record;
	#else
		using boast_Record = BnsTables::EU::boast_Record;
	#endif
}