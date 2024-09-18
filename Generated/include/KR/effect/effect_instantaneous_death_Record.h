/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_instantaneous_death_Record : effect_Record
	{
	public:
		__int8 death_probability;
bool exhaustion;

		static __int32 SubType() { return 51; }
	};
#pragma pack(pop)
}