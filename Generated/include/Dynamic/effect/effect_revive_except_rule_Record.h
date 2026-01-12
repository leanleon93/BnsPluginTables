#pragma once
#include "../../EU/effect/effect_revive_except_rule_Record.h"
#include "../../KR/effect/effect_revive_except_rule_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_revive_except_rule_Record = BnsTables::KR::effect_revive_except_rule_Record;
	#else
		using effect_revive_except_rule_Record = BnsTables::EU::effect_revive_except_rule_Record;
	#endif
}