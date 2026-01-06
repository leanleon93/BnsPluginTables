/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_guard_gauge_damage_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
__int32 guard_gauge_diff;
__int16 guard_gauge_percent;

		static __int32 SubType() { return 25; }
	};
#pragma pack(pop)
}