#pragma once
#include "../../EU/effect/effect_dispel_buff_Record.h"
#include "../../KR/effect/effect_dispel_buff_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_dispel_buff_Record = BnsTables::KR::effect_dispel_buff_Record;
	#else
		using effect_dispel_buff_Record = BnsTables::EU::effect_dispel_buff_Record;
	#endif
}