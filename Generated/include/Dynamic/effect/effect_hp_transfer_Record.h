#pragma once
#include "../../EU/effect/effect_hp_transfer_Record.h"
#include "../../KR/effect/effect_hp_transfer_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_transfer_Record = BnsTables::KR::effect_hp_transfer_Record;
	#else
		using effect_hp_transfer_Record = BnsTables::EU::effect_hp_transfer_Record;
	#endif
}