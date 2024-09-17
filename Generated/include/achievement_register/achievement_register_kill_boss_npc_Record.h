/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_kill_boss_npc_Record : achievement_register_Record
	{
	public:
		Data::TableRef boss_npc;
int boss_npc_tableId(){return 255;};
bool first_attacker;
bool last_attacker;
__int8 max_level;
bool team_broadcast;
__int8 difficulty_type;
__int8 party_member_min_count;
__int8 party_member_max_count;
bool party_same_job;
__int8 min_sealed_level;
__int8 min_sealed_level_op;
__int8 max_sealed_level;
__int8 max_sealed_level_op;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}