/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_repair_item_Record : achievement_register_Record
	{
	public:
		Data::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;

		static __int32 SubType() { return 43; }
	};
#pragma pack(pop)
}