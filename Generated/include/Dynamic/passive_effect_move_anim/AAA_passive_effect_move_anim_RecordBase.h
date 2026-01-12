#pragma once
#include "../../EU/passive_effect_move_anim/AAA_passive_effect_move_anim_RecordBase.h"
#include "../../KR/passive_effect_move_anim/AAA_passive_effect_move_anim_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using passive_effect_move_anim_Record = BnsTables::KR::passive_effect_move_anim_Record;
	#else
		using passive_effect_move_anim_Record = BnsTables::EU::passive_effect_move_anim_Record;
	#endif
}