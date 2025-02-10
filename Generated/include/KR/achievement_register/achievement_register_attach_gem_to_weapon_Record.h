/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_attach_gem_to_weapon_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef weapon_brand;
int weapon_brand_tableId() const {return 190;};
signed char weapon_grade;
char Pad_sub_0[3];
BnsTables::Shared::TableRef weapon_gem_brand;
int weapon_gem_brand_tableId() const {return 190;};
signed char weapon_gem_grade;
signed char weapon_gem_level;

		static __int32 SubType() { return 37; }
	};
#pragma pack(pop)
}