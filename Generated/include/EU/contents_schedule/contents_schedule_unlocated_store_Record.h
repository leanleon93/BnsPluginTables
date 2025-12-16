/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_contents_schedule_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct contents_schedule_unlocated_store_Record : contents_schedule_Record
	{
	public:
		BnsTables::Shared::TableRef unlocated_store;
int unlocated_store_tableId() const {return 445;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}