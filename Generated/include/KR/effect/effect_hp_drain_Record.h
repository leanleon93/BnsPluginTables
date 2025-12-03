/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_hp_drain_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int32 hp_diff;
__int16 hp_percent;
char Pad_sub_1[2];
__int32 pve_boss_level_npc_hp_diff;
__int16 pve_boss_level_npc_hp_percent;
char Pad_sub_2[2];
__int32 pvp_hp_diff;
__int16 pvp_hp_percent;

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}