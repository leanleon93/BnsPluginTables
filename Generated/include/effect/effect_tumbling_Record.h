/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_tumbling_Record : effect_Record
	{
	public:
		__int16 tumbling_speed;
__int8 tumbling_direction;
bool target_yaw_to_back;

		static __int32 SubType() { return 62; }
	};
#pragma pack(pop)
}