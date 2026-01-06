/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_dull_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
__int16 move_speed_percent;
__int16 cast_speed_percent;

		static __int32 SubType() { return 923; }
	};
#pragma pack(pop)
}