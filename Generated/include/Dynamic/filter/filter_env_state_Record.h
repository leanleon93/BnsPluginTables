#pragma once
#include "../../EU/filter/filter_env_state_Record.h"
#include "../../KR/filter/filter_env_state_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_env_state_Record = BnsTables::KR::filter_env_state_Record;
	#else
		using filter_env_state_Record = BnsTables::EU::filter_env_state_Record;
	#endif
}