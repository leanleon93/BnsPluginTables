/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_duel_npc_challenge_strategic_skill_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct duel_npc_challenge_strategic_skill_active_Record : duel_npc_challenge_strategic_skill_Record
	{
	public:
		BnsTables::Shared::TableRef strategic_skill;
int strategic_skill_tableId() const {return 353;};
bool unlimited;
signed char bullet_count;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}