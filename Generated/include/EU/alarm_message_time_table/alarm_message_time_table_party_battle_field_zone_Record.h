/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_alarm_message_time_table_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct alarm_message_time_table_party_battle_field_zone_Record : alarm_message_time_table_Record
	{
	public:
		BnsTables::Shared::TableRef party_battle_field_zone;
int party_battle_field_zone_tableId() const {return 286;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}