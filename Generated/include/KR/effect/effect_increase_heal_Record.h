/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_increase_heal_Record : effect_Record
	{
	public:
		__int16 additional_heal_percent;
__int16 additional_heal_diff;

		static __int32 SubType() { return 117; }
	};
#pragma pack(pop)
}