#pragma once
#include "../../EU/filter/filter_summoned_Record.h"
#include "../../KR/filter/filter_summoned_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_summoned_Record = BnsTables::KR::filter_summoned_Record;
	#else
		using filter_summoned_Record = BnsTables::EU::filter_summoned_Record;
	#endif
}