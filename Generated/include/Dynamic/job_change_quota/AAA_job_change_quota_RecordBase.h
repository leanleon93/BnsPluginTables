#pragma once
#include "../../EU/job_change_quota/AAA_job_change_quota_RecordBase.h"
#include "../../KR/job_change_quota/AAA_job_change_quota_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using job_change_quota_Record = BnsTables::KR::job_change_quota_Record;
	#else
		using job_change_quota_Record = BnsTables::EU::job_change_quota_Record;
	#endif
}