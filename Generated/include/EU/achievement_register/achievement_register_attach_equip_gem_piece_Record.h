/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_attach_equip_gem_piece_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef primary_item_brand;
int primary_item_brand_tableId(){return 183;};
BnsTables::Shared::TableRef secondary_item_brand;
int secondary_item_brand_tableId(){return 183;};
__int8 primary_item_grade;
__int8 secondary_item_grade;

		static __int32 SubType() { return 32; }
	};
#pragma pack(pop)
}