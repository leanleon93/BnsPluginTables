#pragma once
#include "../../EU/effect/effect_melee_physical_attack_sp_drain_Record.h"
#include "../../KR/effect/effect_melee_physical_attack_sp_drain_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_melee_physical_attack_sp_drain_Record = BnsTables::KR::effect_melee_physical_attack_sp_drain_Record;
	#else
		using effect_melee_physical_attack_sp_drain_Record = BnsTables::EU::effect_melee_physical_attack_sp_drain_Record;
	#endif
}