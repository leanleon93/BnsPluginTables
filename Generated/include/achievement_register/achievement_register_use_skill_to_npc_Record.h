/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_use_skill_to_npc_Record : achievement_register_Record
	{
	public:
		__int32 skill_id[8];
Data::TableRef npc[4];
int npc_tableId(){return 255;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}