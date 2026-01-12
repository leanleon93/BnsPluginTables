#pragma once
#include "../../EU/skipquest/skipquest_job_Record.h"
#include "../../KR/skipquest/skipquest_job_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skipquest_job_Record = BnsTables::KR::skipquest_job_Record;
	#else
		using skipquest_job_Record = BnsTables::EU::skipquest_job_Record;
	#endif
}