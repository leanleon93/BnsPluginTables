/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventcond_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zonetriggereventcond_weekly_event_Record : zonetriggereventcond_Record
	{
	public:
		signed char event_day_of_week;
signed char event_hour[12];
__int32 event_hour_Size() const {return 12;};
signed char event_minute[12];
__int32 event_minute_Size() const {return 12;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}