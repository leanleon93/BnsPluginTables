#pragma once
#include "../../EU/effect/effect_defence_block_Record.h"
#include "../../KR/effect/effect_defence_block_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_defence_block_Record = BnsTables::KR::effect_defence_block_Record;
	#else
		using effect_defence_block_Record = BnsTables::EU::effect_defence_block_Record;
	#endif
}