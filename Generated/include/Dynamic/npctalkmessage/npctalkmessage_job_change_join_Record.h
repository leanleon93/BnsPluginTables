#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_job_change_join_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_job_change_join_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_job_change_join_Record = BnsTables::KR::npctalkmessage_job_change_join_Record;
	#else
		using npctalkmessage_job_change_join_Record = BnsTables::EU::npctalkmessage_job_change_join_Record;
	#endif
}