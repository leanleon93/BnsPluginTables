/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_stand_by_guild_battle_field_entrance_Record : zonetriggereventstage_Record
	{
	public:
		__int8 min_growing_channel;
char Pad_sub_0[1];
__int16 total_duration_minute[2];

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}