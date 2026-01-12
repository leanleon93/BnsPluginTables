#pragma once
#include "../../EU/randomstoredrawreward/AAA_randomstoredrawreward_RecordBase.h"
#include "../../KR/randomstoredrawreward/AAA_randomstoredrawreward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using randomstoredrawreward_Record = BnsTables::KR::randomstoredrawreward_Record;
	#else
		using randomstoredrawreward_Record = BnsTables::EU::randomstoredrawreward_Record;
	#endif
}