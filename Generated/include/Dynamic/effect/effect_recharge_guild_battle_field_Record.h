#pragma once
#include "../../EU/effect/effect_recharge_guild_battle_field_Record.h"
#include "../../KR/effect/effect_recharge_guild_battle_field_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_recharge_guild_battle_field_Record = BnsTables::KR::effect_recharge_guild_battle_field_Record;
	#else
		using effect_recharge_guild_battle_field_Record = BnsTables::EU::effect_recharge_guild_battle_field_Record;
	#endif
}