/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_interval_hp_heal_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
__int32 hp_diff;
__int16 hp_percent;

		static __int32 SubType() { return 80; }
	};
#pragma pack(pop)
}