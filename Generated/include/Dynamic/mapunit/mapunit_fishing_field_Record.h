#pragma once
#include "../../EU/mapunit/mapunit_fishing_field_Record.h"
#include "../../KR/mapunit/mapunit_fishing_field_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_fishing_field_Record = BnsTables::KR::mapunit_fishing_field_Record;
	#else
		using mapunit_fishing_field_Record = BnsTables::EU::mapunit_fishing_field_Record;
	#endif
}