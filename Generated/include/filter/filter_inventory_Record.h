/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_inventory_Record : filter_Record
	{
	public:
		Data::TableRef item;
int item_tableId(){return 189;};
__int8 amount;

		static __int32 SubType() { return 19; }
	};
#pragma pack(pop)
}