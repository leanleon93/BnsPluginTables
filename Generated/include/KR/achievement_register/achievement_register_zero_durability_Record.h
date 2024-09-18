/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_zero_durability_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand;
int item_brand_tableId(){return 189;};
__int8 item_grade;

		static __int32 SubType() { return 42; }
	};
#pragma pack(pop)
}