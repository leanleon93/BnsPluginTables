#pragma once
#include "../../EU/filter/filter_prop_percent_Record.h"
#include "../../KR/filter/filter_prop_percent_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_prop_percent_Record = BnsTables::KR::filter_prop_percent_Record;
	#else
		using filter_prop_percent_Record = BnsTables::EU::filter_prop_percent_Record;
	#endif
}