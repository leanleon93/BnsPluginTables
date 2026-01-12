/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/job_style/AAA_job_style_RecordBase.h"
#include "../../KR/job_style/AAA_job_style_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using job_style_Record = BnsTables::KR::job_style_Record;
	#else
		using job_style_Record = BnsTables::EU::job_style_Record;
	#endif
}