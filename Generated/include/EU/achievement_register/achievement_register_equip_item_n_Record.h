/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_equip_item_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item[8];
int item_tableId(){return 189;};
BnsTables::Shared::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}