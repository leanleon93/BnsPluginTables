/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_transform_item_brand_Record : achievement_register_Record
	{
	public:
		Data::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;
__int8 equip_type;
__int8 result;

		static __int32 SubType() { return 40; }
	};
#pragma pack(pop)
}