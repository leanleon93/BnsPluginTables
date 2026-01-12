/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/mapunit/mapunit_boss_Record.h"
#include "../../KR/mapunit/mapunit_boss_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_boss_Record = BnsTables::KR::mapunit_boss_Record;
	#else
		using mapunit_boss_Record = BnsTables::EU::mapunit_boss_Record;
	#endif
}