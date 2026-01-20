/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_bleeding_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int64 hp_diff;
__int32 bleeding_max_hp_percent;

		static __int32 SubType() { return 66; }
	};
#pragma pack(pop)
}