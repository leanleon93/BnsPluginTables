#pragma once
#include "../../EU/skill_training_room/AAA_skill_training_room_RecordBase.h"
#include "../../KR/skill_training_room/AAA_skill_training_room_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_training_room_Record = BnsTables::KR::skill_training_room_Record;
	#else
		using skill_training_room_Record = BnsTables::EU::skill_training_room_Record;
	#endif
}