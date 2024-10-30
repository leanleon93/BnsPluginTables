/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_weapon_gem_level_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef weapon_gem_brand;
int weapon_gem_brand_tableId() const {return 189;};
signed char weapon_gem_grade;
signed char weapon_gem_level[8];
__int32 weapon_gem_level_Size() const {return 8;};
char Pad_sub_0[3];
BnsTables::Shared::TableRef slot_name[8];
__int32 slot_name_Size() const {return 8;};
int slot_name_tableId() const {return 420;};

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}