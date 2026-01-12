#pragma once
#include "../../EU/env_entrance/AAA_env_entrance_RecordBase.h"
#include "../../KR/env_entrance/AAA_env_entrance_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using env_entrance_Record = BnsTables::KR::env_entrance_Record;
	#else
		using env_entrance_Record = BnsTables::EU::env_entrance_Record;
	#endif
}