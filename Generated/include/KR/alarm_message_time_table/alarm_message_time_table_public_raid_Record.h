/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_alarm_message_time_table_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct alarm_message_time_table_public_raid_Record : alarm_message_time_table_Record
	{
	public:
		BnsTables::Shared::TableRef public_raid;
int public_raid_tableId() const {return 303;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}