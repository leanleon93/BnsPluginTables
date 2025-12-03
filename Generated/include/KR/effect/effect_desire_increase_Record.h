/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_desire_increase_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int16 hate_diff;
__int16 desire_attack_normal_diff;

		static __int32 SubType() { return 30; }
	};
#pragma pack(pop)
}