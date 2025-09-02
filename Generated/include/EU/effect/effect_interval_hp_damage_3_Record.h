/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_interval_hp_damage_3_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
__int64 hp_diff;
__int16 hp_percent;

		static __int32 SubType() { return 88; }
	};
#pragma pack(pop)
}