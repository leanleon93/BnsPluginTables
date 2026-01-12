#pragma once
#include "../../EU/slatescroll/AAA_slatescroll_RecordBase.h"
#include "../../KR/slatescroll/AAA_slatescroll_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using slatescroll_Record = BnsTables::KR::slatescroll_Record;
	#else
		using slatescroll_Record = BnsTables::EU::slatescroll_Record;
	#endif
}