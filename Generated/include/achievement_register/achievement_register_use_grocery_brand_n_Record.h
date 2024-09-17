/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_use_grocery_brand_n_Record : achievement_register_Record
	{
	public:
		Data::TableRef item_brand[8];
int item_brand_tableId(){return 183;};
Data::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}