/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_use_skill_to_npc_Record : achievement_register_Record
	{
	public:
		__int32 skill_id[8];
BnsTables::Shared::TableRef npc[4];
int npc_tableId(){return 265;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}