/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_use_grocery_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item[8];
__int32 item_Size() const {return 8;};
int item_tableId() const {return 202;};

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}