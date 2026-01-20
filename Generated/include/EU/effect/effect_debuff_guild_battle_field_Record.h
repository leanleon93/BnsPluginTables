/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_debuff_guild_battle_field_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int32 hp_diff;
__int16 hp_percent;

		static __int32 SubType() { return 953; }
	};
#pragma pack(pop)
}