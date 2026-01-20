/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_hp_transfer_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int32 hp_diff;
__int16 hp_percent;
__int16 limit_hp_min;

		static __int32 SubType() { return 37; }
	};
#pragma pack(pop)
}