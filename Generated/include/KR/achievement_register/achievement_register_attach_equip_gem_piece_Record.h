/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_attach_equip_gem_piece_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef primary_item_brand;
int primary_item_brand_tableId() const {return 190;};
BnsTables::Shared::TableRef secondary_item_brand;
int secondary_item_brand_tableId() const {return 190;};
signed char primary_item_grade;
signed char secondary_item_grade;

		static __int32 SubType() { return 32; }
	};
#pragma pack(pop)
}