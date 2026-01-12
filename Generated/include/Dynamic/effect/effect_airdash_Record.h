#pragma once
#include "../../EU/effect/effect_airdash_Record.h"
#include "../../KR/effect/effect_airdash_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_airdash_Record = BnsTables::KR::effect_airdash_Record;
	#else
		using effect_airdash_Record = BnsTables::EU::effect_airdash_Record;
	#endif
}