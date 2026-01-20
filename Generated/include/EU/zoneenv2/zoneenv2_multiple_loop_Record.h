/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_multiple_loop_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef loop_restricted_effect;
int loop_restricted_effect_tableId() const {return 119;};

		static __int32 SubType() { return 15; }
	};
#pragma pack(pop)
}