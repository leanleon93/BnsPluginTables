/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_duel_npc_challenge_strategic_skill_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct duel_npc_challenge_strategic_skill_passive_Record : duel_npc_challenge_strategic_skill_Record
	{
	public:
		BnsTables::Shared::TableRef condition_event[3];
int condition_event_tableId(){return 63;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}