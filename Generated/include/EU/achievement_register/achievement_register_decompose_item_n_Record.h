/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item[8];
__int32 item_Size() const {return 8;};
int item_tableId() const {return 195;};
BnsTables::Shared::TableRef slot_name[8];
__int32 slot_name_Size() const {return 8;};
int slot_name_tableId() const {return 420;};

		static __int32 SubType() { return 34; }
	};
#pragma pack(pop)
}