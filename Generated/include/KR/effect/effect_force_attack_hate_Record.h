/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_force_attack_hate_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
signed char hate_multiply_value;
char Pad_sub_1[3];
__int32 hate_diff_value;

		static __int32 SubType() { return 15; }
	};
#pragma pack(pop)
}