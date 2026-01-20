/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_mastery_stat_equip_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int16 modify_ability_for_mastery[16];
__int32 modify_ability_for_mastery_Size() const {return 16;};
__int64 modify_ability_diff_for_mastery[16];
__int32 modify_ability_diff_for_mastery_Size() const {return 16;};
__int16 modify_ability_percent_for_mastery[16];
__int32 modify_ability_percent_for_mastery_Size() const {return 16;};

		static __int32 SubType() { return 974; }
	};
#pragma pack(pop)
}