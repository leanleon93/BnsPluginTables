/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_get_contribution_count_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef npc[8];
__int32 npc_Size() const {return 8;};
int npc_tableId() const {return 276;};

		static __int32 SubType() { return 25; }
	};
#pragma pack(pop)
}