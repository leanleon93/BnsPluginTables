#pragma once
#include "../../EU/alarm_message_time_table/AAA_alarm_message_time_table_RecordBase.h"
#include "../../KR/alarm_message_time_table/AAA_alarm_message_time_table_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using alarm_message_time_table_Record = BnsTables::KR::alarm_message_time_table_Record;
	#else
		using alarm_message_time_table_Record = BnsTables::EU::alarm_message_time_table_Record;
	#endif
}