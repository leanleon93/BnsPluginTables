/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventcond_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventcond_weekly_event_Record : zonetriggereventcond_Record
	{
	public:
		__int8 event_day_of_week;
__int8 event_hour[12];
__int8 event_minute[12];

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}