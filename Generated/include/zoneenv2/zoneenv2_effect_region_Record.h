/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_effect_region_Record : zoneenv2_Record
	{
	public:
		Data::TableRef effect[4];
int effect_tableId(){return 111;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}