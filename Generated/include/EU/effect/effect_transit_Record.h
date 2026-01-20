/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_transit_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int32 zone_id;
signed char pc_spawn;

		static __int32 SubType() { return 47; }
	};
#pragma pack(pop)
}