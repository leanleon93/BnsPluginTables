/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_attach_gem_to_weapon_n_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef weapon_brand;
int weapon_brand_tableId() const {return 195;};
signed char weapon_grade;
char Pad_sub_0[3];
BnsTables::Shared::TableRef weapon_gem[8];
__int32 weapon_gem_Size() const {return 8;};
int weapon_gem_tableId() const {return 202;};
BnsTables::Shared::TableRef slot_name[8];
__int32 slot_name_Size() const {return 8;};
int slot_name_tableId() const {return 435;};

		static __int32 SubType() { return 38; }
	};
#pragma pack(pop)
}