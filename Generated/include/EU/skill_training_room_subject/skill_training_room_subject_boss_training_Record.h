/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_training_room_subject_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct skill_training_room_subject_boss_training_Record : skill_training_room_subject_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef boss_npc;
int boss_npc_tableId() const {return 269;};
BnsTables::Shared::TableRef boss_desc;
int boss_desc_tableId() const {return 426;};
BnsTables::Shared::TableRef boss_combat_desc;
int boss_combat_desc_tableId() const {return 426;};
BnsTables::Shared::TableRef boss_combat_tips_desc;
int boss_combat_tips_desc_tableId() const {return 426;};
wchar_t* boss_image;
BnsTables::Shared::TableRef dungeon_name;
int dungeon_name_tableId() const {return 426;};
signed char dungeon_group;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}