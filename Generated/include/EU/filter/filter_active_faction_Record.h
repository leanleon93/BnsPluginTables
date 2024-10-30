/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_active_faction_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef value;
int value_tableId() const {return 135;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}