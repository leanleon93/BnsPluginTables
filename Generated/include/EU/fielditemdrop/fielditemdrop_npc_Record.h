/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct fielditemdrop_npc_Record : fielditemdrop_Record
	{
	public:
		char Pad_sub_0[1];
__int8 drop_case;
char Pad_sub_1[1];
__int16 effect_attribute[4];
char Pad_sub_2[2];
__int64 effect_attribute_value;
__int64 effect_attribute_value_2;
__int64 effect_attribute_value_3;
__int8 hp_percent;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}