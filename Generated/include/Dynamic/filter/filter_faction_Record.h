#pragma once
#include "../../EU/filter/filter_faction_Record.h"
#include "../../KR/filter/filter_faction_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_faction_Record = BnsTables::KR::filter_faction_Record;
	#else
		using filter_faction_Record = BnsTables::EU::filter_faction_Record;
	#endif
}