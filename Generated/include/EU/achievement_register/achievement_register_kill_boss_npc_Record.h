/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_kill_boss_npc_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef boss_npc[8];
__int32 boss_npc_Size() const {return 8;};
int boss_npc_tableId() const {return 269;};
bool first_attacker;
bool last_attacker;
signed char max_level;
bool team_broadcast;
signed char difficulty_type;
signed char party_member_min_count;
signed char party_member_max_count;
bool party_same_job;
signed char min_sealed_level;
signed char min_sealed_level_op;
signed char max_sealed_level;
signed char max_sealed_level_op;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}