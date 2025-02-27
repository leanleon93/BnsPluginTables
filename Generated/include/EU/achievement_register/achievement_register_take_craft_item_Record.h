/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_take_craft_item_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item;
int item_tableId() const {return 197;};

		static __int32 SubType() { return 51; }
	};
#pragma pack(pop)
}