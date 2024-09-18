/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_knockback_Record : effect_Record
	{
	public:
		__int16 knockback_speed;
bool caster_dash;
__int8 knockback_direction;
__int8 knockback_type;
bool target_yaw_to_caster;
bool do_not_apply_block_move;

		static __int32 SubType() { return 61; }
	};
#pragma pack(pop)
}