/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zoneenv2_effect_region_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef effect[4];
__int32 effect_Size() const {return 4;};
int effect_tableId() const {return 115;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}