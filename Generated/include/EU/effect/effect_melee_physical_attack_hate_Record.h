/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_melee_physical_attack_hate_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
signed char hate_multiply_value;
char Pad_sub_1[3];
__int32 hate_diff_value;

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}