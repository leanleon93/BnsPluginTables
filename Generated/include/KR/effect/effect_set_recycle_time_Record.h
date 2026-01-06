/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_set_recycle_time_Record : effect_Record
	{
	public:
		char Pad_sub_0[1];
signed char recycle_group[2];
__int32 recycle_group_Size() const {return 2;};
signed char recycle_group_id[2];
__int32 recycle_group_id_Size() const {return 2;};
__int32 recycle_group_set_time[2];
__int32 recycle_group_set_time_Size() const {return 2;};

		static __int32 SubType() { return 926; }
	};
#pragma pack(pop)
}