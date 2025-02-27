/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_alarm_message_time_table_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct alarm_message_time_table_world_boss_Record : alarm_message_time_table_Record
	{
	public:
		BnsTables::Shared::TableRef world_boss_spawn;
int world_boss_spawn_tableId() const {return 463;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}