#pragma once
#include "../../EU/filter/filter_skill_Record.h"
#include "../../KR/filter/filter_skill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_skill_Record = BnsTables::KR::filter_skill_Record;
	#else
		using filter_skill_Record = BnsTables::EU::filter_skill_Record;
	#endif
}