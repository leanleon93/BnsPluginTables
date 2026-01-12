#pragma once
#include "../../EU/mapunit/mapunit_env_Record.h"
#include "../../KR/mapunit/mapunit_env_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_env_Record = BnsTables::KR::mapunit_env_Record;
	#else
		using mapunit_env_Record = BnsTables::EU::mapunit_env_Record;
	#endif
}