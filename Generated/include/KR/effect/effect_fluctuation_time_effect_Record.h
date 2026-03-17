/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_fluctuation_time_effect_Record : effect_Record
	{
	public:
		char Pad_sub_0[1];
__int16 effect_type;
char Pad_sub_1[2];
__int32 fluctuation_time_effect_duration;
__int32 effect_duration_fluctuation_max;

		static __int32 SubType() { return 42; }
	};
#pragma pack(pop)
}