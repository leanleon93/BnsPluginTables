/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_race_Record.h"
#include "../../KR/filter/filter_race_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_race_Record = BnsTables::KR::filter_race_Record;
	#else
		using filter_race_Record = BnsTables::EU::filter_race_Record;
	#endif
}