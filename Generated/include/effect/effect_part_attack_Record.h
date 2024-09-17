/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_part_attack_Record : effect_Record
	{
	public:
		Data::TableRef head_effect[2];
int head_effect_tableId(){return 111;};
Data::TableRef body_effect[2];
int body_effect_tableId(){return 111;};
Data::TableRef arm_effect[2];
int arm_effect_tableId(){return 111;};
Data::TableRef leg_effect[2];
int leg_effect_tableId(){return 111;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}