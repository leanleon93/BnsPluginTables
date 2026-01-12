/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/job/AAA_job_RecordBase.h"
#include "../../KR/job/AAA_job_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using job_Record = BnsTables::KR::job_Record;
	#else
		using job_Record = BnsTables::EU::job_Record;
	#endif
}