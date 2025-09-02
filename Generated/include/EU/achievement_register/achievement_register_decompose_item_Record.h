/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand;
int item_brand_tableId() const {return 195;};
signed char item_grade;
signed char item_level;
signed char equip_type;
bool equip_gem_only;
signed char weapon_gem_level;

		static __int32 SubType() { return 33; }
	};
#pragma pack(pop)
}