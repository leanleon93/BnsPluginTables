#pragma once
#include "../../EU/glyph_reward/AAA_glyph_reward_RecordBase.h"
#include "../../KR/glyph_reward/AAA_glyph_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using glyph_reward_Record = BnsTables::KR::glyph_reward_Record;
	#else
		using glyph_reward_Record = BnsTables::EU::glyph_reward_Record;
	#endif
}