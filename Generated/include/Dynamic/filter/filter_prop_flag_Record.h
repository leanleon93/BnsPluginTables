#pragma once
#include "../../EU/filter/filter_prop_flag_Record.h"
#include "../../KR/filter/filter_prop_flag_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_prop_flag_Record = BnsTables::KR::filter_prop_flag_Record;
	#else
		using filter_prop_flag_Record = BnsTables::EU::filter_prop_flag_Record;
	#endif
}