#pragma once
#include "../../EU/wantedmission/AAA_wantedmission_RecordBase.h"
#include "../../KR/wantedmission/AAA_wantedmission_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using wantedmission_Record = BnsTables::KR::wantedmission_Record;
	#else
		using wantedmission_Record = BnsTables::EU::wantedmission_Record;
	#endif
}