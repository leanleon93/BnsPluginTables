#pragma once
#include "../../EU/jobspecialization/AAA_jobspecialization_RecordBase.h"
#include "../../KR/jobspecialization/AAA_jobspecialization_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jobspecialization_Record = BnsTables::KR::jobspecialization_Record;
	#else
		using jobspecialization_Record = BnsTables::EU::jobspecialization_Record;
	#endif
}