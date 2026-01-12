#pragma once
#include "../../EU/effect/effect_immediately_exec_Record.h"
#include "../../KR/effect/effect_immediately_exec_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_immediately_exec_Record = BnsTables::KR::effect_immediately_exec_Record;
	#else
		using effect_immediately_exec_Record = BnsTables::EU::effect_immediately_exec_Record;
	#endif
}