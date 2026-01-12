/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_buff_parry_Record.h"
#include "../../KR/effect/effect_buff_parry_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_buff_parry_Record = BnsTables::KR::effect_buff_parry_Record;
	#else
		using effect_buff_parry_Record = BnsTables::EU::effect_buff_parry_Record;
	#endif
}