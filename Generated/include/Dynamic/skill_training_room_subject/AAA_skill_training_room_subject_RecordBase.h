#pragma once
#include "../../EU/skill_training_room_subject/AAA_skill_training_room_subject_RecordBase.h"
#include "../../KR/skill_training_room_subject/AAA_skill_training_room_subject_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_training_room_subject_Record = BnsTables::KR::skill_training_room_subject_Record;
	#else
		using skill_training_room_subject_Record = BnsTables::EU::skill_training_room_subject_Record;
	#endif
}