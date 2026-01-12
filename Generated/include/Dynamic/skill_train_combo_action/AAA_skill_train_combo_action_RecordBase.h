#pragma once
#include "../../EU/skill_train_combo_action/AAA_skill_train_combo_action_RecordBase.h"
#include "../../KR/skill_train_combo_action/AAA_skill_train_combo_action_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_train_combo_action_Record = BnsTables::KR::skill_train_combo_action_Record;
	#else
		using skill_train_combo_action_Record = BnsTables::EU::skill_train_combo_action_Record;
	#endif
}