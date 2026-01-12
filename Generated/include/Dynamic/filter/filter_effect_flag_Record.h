#pragma once
#include "../../EU/filter/filter_effect_flag_Record.h"
#include "../../KR/filter/filter_effect_flag_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_effect_flag_Record = BnsTables::KR::filter_effect_flag_Record;
	#else
		using filter_effect_flag_Record = BnsTables::EU::filter_effect_flag_Record;
	#endif
}