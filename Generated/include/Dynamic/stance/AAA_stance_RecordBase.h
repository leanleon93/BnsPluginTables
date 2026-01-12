#pragma once
#include "../../EU/stance/AAA_stance_RecordBase.h"
#include "../../KR/stance/AAA_stance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using stance_Record = BnsTables::KR::stance_Record;
	#else
		using stance_Record = BnsTables::EU::stance_Record;
	#endif
}