#pragma once
#include "../../EU/jobskillset/AAA_jobskillset_RecordBase.h"
#include "../../KR/jobskillset/AAA_jobskillset_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jobskillset_Record = BnsTables::KR::jobskillset_Record;
	#else
		using jobskillset_Record = BnsTables::EU::jobskillset_Record;
	#endif
}