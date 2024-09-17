/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_link_Record : effect_Record
	{
	public:
		__int8 link_type;
__int8 link_stage;
char Pad_sub_0[2];
Data::TableRef catch_caster_effect;
int catch_caster_effect_tableId(){return 111;};
Data::TableRef catch_target_effect;
int catch_target_effect_tableId(){return 111;};
Data::TableRef detach_effect;
int detach_effect_tableId(){return 111;};
__int8 detach_angle_by_dispeled;
char Pad_sub_1[1];
__int16 detach_margin_by_dispeled;
__int8 detach_angle_by_timeout;
char Pad_sub_2[1];
__int16 detach_margin_by_timeout;

		static __int32 SubType() { return 60; }
	};
#pragma pack(pop)
}