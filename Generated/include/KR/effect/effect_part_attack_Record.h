/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_part_attack_Record : effect_Record
	{
	public:
		BnsTables::Shared::TableRef head_effect[2];
int head_effect_tableId(){return 115;};
BnsTables::Shared::TableRef body_effect[2];
int body_effect_tableId(){return 115;};
BnsTables::Shared::TableRef arm_effect[2];
int arm_effect_tableId(){return 115;};
BnsTables::Shared::TableRef leg_effect[2];
int leg_effect_tableId(){return 115;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}