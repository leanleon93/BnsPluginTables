/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_set_immune_breaker_Record : effect_Record
	{
	public:
		__int16 immune_breaker_attribute;
__int8 immune_breaker_count;
char Pad_sub_0[1];
__int32 immune_breaker_duration;

		static __int32 SubType() { return 27; }
	};
#pragma pack(pop)
}