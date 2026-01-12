#pragma once
#include "../../EU/effect/effect_dash_block_Record.h"
#include "../../KR/effect/effect_dash_block_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_dash_block_Record = BnsTables::KR::effect_dash_block_Record;
	#else
		using effect_dash_block_Record = BnsTables::EU::effect_dash_block_Record;
	#endif
}