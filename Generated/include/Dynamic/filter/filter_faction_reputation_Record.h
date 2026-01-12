/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_faction_reputation_Record.h"
#include "../../KR/filter/filter_faction_reputation_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_faction_reputation_Record = BnsTables::KR::filter_faction_reputation_Record;
	#else
		using filter_faction_reputation_Record = BnsTables::EU::filter_faction_reputation_Record;
	#endif
}