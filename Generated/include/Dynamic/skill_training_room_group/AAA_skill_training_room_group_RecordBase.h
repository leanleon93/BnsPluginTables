#pragma once
#include "../../EU/skill_training_room_group/AAA_skill_training_room_group_RecordBase.h"
#include "../../KR/skill_training_room_group/AAA_skill_training_room_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_training_room_group_Record = BnsTables::KR::skill_training_room_group_Record;
	#else
		using skill_training_room_group_Record = BnsTables::EU::skill_training_room_group_Record;
	#endif
}