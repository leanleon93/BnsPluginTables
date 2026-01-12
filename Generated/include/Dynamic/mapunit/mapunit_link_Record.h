#pragma once
#include "../../EU/mapunit/mapunit_link_Record.h"
#include "../../KR/mapunit/mapunit_link_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_link_Record = BnsTables::KR::mapunit_link_Record;
	#else
		using mapunit_link_Record = BnsTables::EU::mapunit_link_Record;
	#endif
}