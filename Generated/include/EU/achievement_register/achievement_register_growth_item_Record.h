/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_growth_item_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef seed_item_brand;
int seed_item_brand_tableId() const {return 191;};
BnsTables::Shared::TableRef feed_item_brand;
int feed_item_brand_tableId() const {return 191;};
signed char seed_item_before_level;
signed char seed_item_growth_level;
signed char feed_item_level;

		static __int32 SubType() { return 31; }
	};
#pragma pack(pop)
}