#pragma once
#include "../../EU/mapunit/mapunit_static_Record.h"
#include "../../KR/mapunit/mapunit_static_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_static_Record = BnsTables::KR::mapunit_static_Record;
	#else
		using mapunit_static_Record = BnsTables::EU::mapunit_static_Record;
	#endif
}