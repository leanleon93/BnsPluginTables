/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_extend_effect_Record : effect_Record
	{
	public:
		__int16 effect_type;
char Pad_sub_0[2];
__int32 extend_duration;

		static __int32 SubType() { return 41; }
	};
#pragma pack(pop)
}