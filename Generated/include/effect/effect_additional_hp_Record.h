/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_additional_hp_Record : effect_Record
	{
	public:
		__int32 hp_diff;
__int16 additional_max_hp_percent;
bool absorb_last_damage;
bool ref_target_max_hp;
bool use_additional_max_hp_percent_max;
char Pad_sub_0[3];
__int32 additional_max_hp_percent_max;

		static __int32 SubType() { return 69; }
	};
#pragma pack(pop)
}