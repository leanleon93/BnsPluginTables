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
__int32 head_effect_Size() const {return 2;};
int head_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef body_effect[2];
__int32 body_effect_Size() const {return 2;};
int body_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef arm_effect[2];
__int32 arm_effect_Size() const {return 2;};
int arm_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef leg_effect[2];
__int32 leg_effect_Size() const {return 2;};
int leg_effect_tableId() const {return 115;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}