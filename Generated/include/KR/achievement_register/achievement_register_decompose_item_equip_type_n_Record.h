/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_equip_type_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand;
int item_brand_tableId() const {return 195;};
signed char item_grade;
signed char item_level;
signed char equip_type[8];
__int32 equip_type_Size() const {return 8;};
char Pad_sub_0[2];
BnsTables::Shared::TableRef slot_name[8];
__int32 slot_name_Size() const {return 8;};
int slot_name_tableId() const {return 434;};

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}