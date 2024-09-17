/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_npc_change_appearance_Record : effect_Record
	{
	public:
		Data::TableRef npc;
int npc_tableId(){return 255;};
Data::TableRef weapon;
int weapon_tableId(){return 189;};

		static __int32 SubType() { return 875; }
	};
#pragma pack(pop)
}