/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_attach_gem_to_weapon_Record : achievement_register_Record
	{
	public:
		Data::TableRef weapon_brand;
int weapon_brand_tableId(){return 183;};
__int8 weapon_grade;
char Pad_sub_0[3];
Data::TableRef weapon_gem_brand;
int weapon_gem_brand_tableId(){return 183;};
__int8 weapon_gem_grade;
__int8 weapon_gem_level;

		static __int32 SubType() { return 37; }
	};
#pragma pack(pop)
}