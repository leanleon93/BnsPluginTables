/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_mastery_stat_equip_Record : effect_Record
	{
	public:
		__int16 modify_ability_for_mastery[16];
__int64 modify_ability_diff_for_mastery[16];
__int16 modify_ability_percent_for_mastery[16];

		static __int32 SubType() { return 861; }
	};
#pragma pack(pop)
}