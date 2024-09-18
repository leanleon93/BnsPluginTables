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
int weapon_brand_tableId(){return 189;};
__int8 weapon_grade;
char Pad_sub_0[3];
BnsTables::Shared::TableRef weapon_gem[8];
int weapon_gem_tableId(){return 195;};
BnsTables::Shared::TableRef slot_name[8];
int slot_name_tableId(){return 420;};

		static __int32 SubType() { return 38; }
	};
#pragma pack(pop)
}