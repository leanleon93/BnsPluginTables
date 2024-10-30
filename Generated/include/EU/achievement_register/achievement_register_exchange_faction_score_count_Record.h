/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_exchange_faction_score_count_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 265;};
signed char min_exchange_score;

		static __int32 SubType() { return 21; }
	};
#pragma pack(pop)
}