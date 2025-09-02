/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_additional_hp3_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
__int32 hp_diff;
__int16 additional_max_hp_percent;
bool absorb_last_damage;
bool ref_target_max_hp;
bool use_additional_max_hp_percent_max;
char Pad_sub_1[3];
__int32 additional_max_hp_percent_max;

		static __int32 SubType() { return 71; }
	};
#pragma pack(pop)
}