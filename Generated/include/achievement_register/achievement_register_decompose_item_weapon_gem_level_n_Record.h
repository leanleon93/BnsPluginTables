/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_weapon_gem_level_n_Record : achievement_register_Record
	{
	public:
		Data::TableRef weapon_gem_brand;
int weapon_gem_brand_tableId(){return 183;};
__int8 weapon_gem_grade;
__int8 weapon_gem_level[8];
char Pad_sub_0[3];
Data::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}