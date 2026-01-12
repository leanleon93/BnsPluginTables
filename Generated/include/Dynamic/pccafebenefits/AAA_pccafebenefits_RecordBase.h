#pragma once
#include "../../EU/pccafebenefits/AAA_pccafebenefits_RecordBase.h"
#include "../../KR/pccafebenefits/AAA_pccafebenefits_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pccafebenefits_Record = BnsTables::KR::pccafebenefits_Record;
	#else
		using pccafebenefits_Record = BnsTables::EU::pccafebenefits_Record;
	#endif
}