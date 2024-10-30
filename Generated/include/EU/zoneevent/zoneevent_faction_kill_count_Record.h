/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneevent_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneevent_faction_kill_count_Record : zoneevent_Record
	{
	public:
		__int32 spawn_delay[3];
__int32 spawn_delay_Size() const {return 3;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}