/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_dungeon_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct dungeon_wave_Record : dungeon_Record
	{
	public:
		__int8 max_wave;
char Pad_sub_0[3];
Data::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};
__int16 reward_box_data_id;
__int16 reward_data_id;
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}