#pragma once
#include "../../EU/alarm_message_time_table/alarm_message_time_table_public_raid_Record.h"
#include "../../KR/alarm_message_time_table/alarm_message_time_table_public_raid_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using alarm_message_time_table_public_raid_Record = BnsTables::KR::alarm_message_time_table_public_raid_Record;
	#else
		using alarm_message_time_table_public_raid_Record = BnsTables::EU::alarm_message_time_table_public_raid_Record;
	#endif
}