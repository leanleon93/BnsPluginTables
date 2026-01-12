#pragma once
#include "../../EU/filter/filter_skill3_Record.h"
#include "../../KR/filter/filter_skill3_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_skill3_Record = BnsTables::KR::filter_skill3_Record;
	#else
		using filter_skill3_Record = BnsTables::EU::filter_skill3_Record;
	#endif
}