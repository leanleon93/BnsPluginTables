/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_event_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct public_raid_event_score_event_Record : public_raid_event_Record
	{
	public:
		char Pad_sub_0[3];
__int16 start_score_amount;
__int16 add_score_amount;
__int16 reduce_score_amount;
__int16 final_score[6];
char Pad_sub_1[2];
__int32 add_score_recycle_duration;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}