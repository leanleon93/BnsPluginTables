#pragma once
#include "../../EU/mapunit/mapunit_attraction_Record.h"
#include "../../KR/mapunit/mapunit_attraction_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_attraction_Record = BnsTables::KR::mapunit_attraction_Record;
	#else
		using mapunit_attraction_Record = BnsTables::EU::mapunit_attraction_Record;
	#endif
}