/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_equip_item_brand_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand[8];
__int32 item_brand_Size() const {return 8;};
int item_brand_tableId() const {return 191;};
signed char equip_type[8];
__int32 equip_type_Size() const {return 8;};
signed char item_min_level[8];
__int32 item_min_level_Size() const {return 8;};
BnsTables::Shared::TableRef slot_name[8];
__int32 slot_name_Size() const {return 8;};
int slot_name_tableId() const {return 427;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}