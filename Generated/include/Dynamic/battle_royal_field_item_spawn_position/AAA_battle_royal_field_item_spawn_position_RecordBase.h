#pragma once
#include "../../EU/battle_royal_field_item_spawn_position/AAA_battle_royal_field_item_spawn_position_RecordBase.h"
#include "../../KR/battle_royal_field_item_spawn_position/AAA_battle_royal_field_item_spawn_position_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using battle_royal_field_item_spawn_position_Record = BnsTables::KR::battle_royal_field_item_spawn_position_Record;
	#else
		using battle_royal_field_item_spawn_position_Record = BnsTables::EU::battle_royal_field_item_spawn_position_Record;
	#endif
}