/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_achievement_ability_Record : effect_Record
	{
	public:
		__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int16 attack_hit_value;
__int16 attack_pierce_value;
__int16 attack_damage_modify_diff;
char Pad_sub_0[2];
__int32 max_hp;
__int16 defend_power_creature_value;
__int16 defend_dodge_value;
__int16 defend_parry_value;
__int16 defend_damage_modify_diff;

		static __int32 SubType() { return 965; }
	};
#pragma pack(pop)
}