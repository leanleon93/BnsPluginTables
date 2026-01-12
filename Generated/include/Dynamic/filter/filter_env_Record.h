/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_env_Record.h"
#include "../../KR/filter/filter_env_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_env_Record = BnsTables::KR::filter_env_Record;
	#else
		using filter_env_Record = BnsTables::EU::filter_env_Record;
	#endif
}