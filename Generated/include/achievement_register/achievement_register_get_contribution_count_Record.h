/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_get_contribution_count_Record : achievement_register_Record
	{
	public:
		Data::TableRef npc[8];
int npc_tableId(){return 255;};

		static __int32 SubType() { return 25; }
	};
#pragma pack(pop)
}