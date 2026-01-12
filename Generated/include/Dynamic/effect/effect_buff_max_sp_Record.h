#pragma once
#include "../../EU/effect/effect_buff_max_sp_Record.h"
#include "../../KR/effect/effect_buff_max_sp_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_buff_max_sp_Record = BnsTables::KR::effect_buff_max_sp_Record;
	#else
		using effect_buff_max_sp_Record = BnsTables::EU::effect_buff_max_sp_Record;
	#endif
}