/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_interval_hp_damage_2_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int64 hp_diff;
__int16 hp_percent;

		static __int32 SubType() { return 87; }
	};
#pragma pack(pop)
}