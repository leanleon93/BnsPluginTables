/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2place_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2place_airdash_Record : zoneenv2place_Record
	{
	public:
		char Pad_sub_0[3];
__int32 duration;
Data::XYZ end_pos;
Data::XYZ summon_end_pos;

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}