/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_interval_guard_gauge_heal_Record : effect_Record
	{
	public:
		__int32 guard_gauge_diff;
__int16 guard_gauge_percent;

		static __int32 SubType() { return 101; }
	};
#pragma pack(pop)
}