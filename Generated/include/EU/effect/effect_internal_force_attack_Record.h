/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_internal_force_attack_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
signed char additional_power_probability;
char Pad_sub_1[1];
__int16 additional_power_percent;
__int16 additional_power_diff;

		static __int32 SubType() { return 52; }
	};
#pragma pack(pop)
}