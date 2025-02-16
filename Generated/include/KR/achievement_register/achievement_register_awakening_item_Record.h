/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_awakening_item_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef item_brand;
int item_brand_tableId() const {return 191;};
signed char equip_type;

		static __int32 SubType() { return 39; }
	};
#pragma pack(pop)
}