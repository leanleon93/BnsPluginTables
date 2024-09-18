/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_skill_training_subject_complete_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef skill_training_room_group;
int skill_training_room_group_tableId(){return 357;};

		static __int32 SubType() { return 62; }
	};
#pragma pack(pop)
}