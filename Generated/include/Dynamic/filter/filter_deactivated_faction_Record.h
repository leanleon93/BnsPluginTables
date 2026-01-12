/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_deactivated_faction_Record.h"
#include "../../KR/filter/filter_deactivated_faction_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_deactivated_faction_Record = BnsTables::KR::filter_deactivated_faction_Record;
	#else
		using filter_deactivated_faction_Record = BnsTables::EU::filter_deactivated_faction_Record;
	#endif
}