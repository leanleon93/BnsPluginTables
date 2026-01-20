/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_inventory_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef item;
int item_tableId() const {return 203;};
signed char amount;

		static __int32 SubType() { return 19; }
	};
#pragma pack(pop)
}