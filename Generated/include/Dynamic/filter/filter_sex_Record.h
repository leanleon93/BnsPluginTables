#pragma once
#include "../../EU/filter/filter_sex_Record.h"
#include "../../KR/filter/filter_sex_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_sex_Record = BnsTables::KR::filter_sex_Record;
	#else
		using filter_sex_Record = BnsTables::EU::filter_sex_Record;
	#endif
}