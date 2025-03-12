/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_defend_npc_skill_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef npc_skill;
int npc_skill_tableId() const {return 342;};
__int32 skill_id[8];
__int32 skill_id_Size() const {return 8;};

		static __int32 SubType() { return 11; }
	};
#pragma pack(pop)
}