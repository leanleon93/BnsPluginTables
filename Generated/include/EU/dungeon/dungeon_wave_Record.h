/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_dungeon_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct dungeon_wave_Record : dungeon_Record
	{
	public:
		signed char max_wave;
char Pad_sub_0[3];
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId() const {return 69;};
__int16 reward_box_data_id;
__int16 reward_data_id;
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 75;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}