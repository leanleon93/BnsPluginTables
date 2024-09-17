/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_airdash_leave_Record : zoneenv2_Record
	{
	public:
		__int8 airdash_level;
char Pad_sub_0[3];
Data::TableRef transit_zone;
int transit_zone_tableId(){return 443;};
__int16 transit_pc_spawn;
char Pad_sub_1[2];
Data::TableRef transit_leave_social;
int transit_leave_social_tableId(){return 367;};
Data::TableRef transit_enter_social;
int transit_enter_social_tableId(){return 367;};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}