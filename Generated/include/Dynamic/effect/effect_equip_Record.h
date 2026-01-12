/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_equip_Record.h"
#include "../../KR/effect/effect_equip_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_equip_Record = BnsTables::KR::effect_equip_Record;
	#else
		using effect_equip_Record = BnsTables::EU::effect_equip_Record;
	#endif
}