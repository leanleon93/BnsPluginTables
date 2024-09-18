/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_equip_type_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;
__int8 item_level;
__int8 equip_type[8];
char Pad_sub_0[2];
BnsTables::Shared::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}