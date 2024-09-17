/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_use_gadget_to_npc_Record : achievement_register_Record
	{
	public:
		Data::TableRef gadget;
int gadget_tableId(){return 137;};
Data::TableRef npc;
int npc_tableId(){return 255;};

		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}