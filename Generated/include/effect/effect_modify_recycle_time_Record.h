/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_modify_recycle_time_Record : effect_Record
	{
	public:
		__int8 recycle_group[2];
__int8 recycle_group_id[2];
__int32 recycle_group_modify_time[2];

		static __int32 SubType() { return 812; }
	};
#pragma pack(pop)
}