#pragma once
#include "../../EU/skill_training_room_subject/skill_training_room_subject_boss_training_Record.h"
#include "../../KR/skill_training_room_subject/skill_training_room_subject_boss_training_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_training_room_subject_boss_training_Record = BnsTables::KR::skill_training_room_subject_boss_training_Record;
	#else
		using skill_training_room_subject_boss_training_Record = BnsTables::EU::skill_training_room_subject_boss_training_Record;
	#endif
}