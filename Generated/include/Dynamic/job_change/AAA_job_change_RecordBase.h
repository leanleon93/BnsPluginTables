/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/job_change/AAA_job_change_RecordBase.h"
#include "../../KR/job_change/AAA_job_change_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using job_change_Record = BnsTables::KR::job_change_Record;
	#else
		using job_change_Record = BnsTables::EU::job_change_Record;
	#endif
}