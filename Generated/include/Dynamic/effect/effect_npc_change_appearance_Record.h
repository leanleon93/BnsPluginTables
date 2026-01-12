#pragma once
#include "../../EU/effect/effect_npc_change_appearance_Record.h"
#include "../../KR/effect/effect_npc_change_appearance_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_npc_change_appearance_Record = BnsTables::KR::effect_npc_change_appearance_Record;
	#else
		using effect_npc_change_appearance_Record = BnsTables::EU::effect_npc_change_appearance_Record;
	#endif
}