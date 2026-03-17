/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_link_Record : effect_Record
	{
	public:
		char Pad_sub_0[1];
signed char link_type;
signed char link_stage;
char Pad_sub_1[2];
BnsTables::Shared::TableRef catch_caster_effect;
int catch_caster_effect_tableId() const {return 119;};
BnsTables::Shared::TableRef catch_target_effect;
int catch_target_effect_tableId() const {return 119;};
BnsTables::Shared::TableRef detach_effect;
int detach_effect_tableId() const {return 119;};
signed char detach_angle_by_dispeled;
char Pad_sub_2[1];
__int16 detach_margin_by_dispeled;
signed char detach_angle_by_timeout;
char Pad_sub_3[1];
__int16 detach_margin_by_timeout;

		static __int32 SubType() { return 60; }
	};
#pragma pack(pop)
}