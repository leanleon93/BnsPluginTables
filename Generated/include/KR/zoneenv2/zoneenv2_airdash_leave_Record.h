/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zoneenv2_airdash_leave_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
__int8 airdash_level;
char Pad_sub_1[3];
BnsTables::Shared::TableRef transit_zone;
int transit_zone_tableId(){return 461;};
__int16 transit_pc_spawn;
char Pad_sub_2[2];
BnsTables::Shared::TableRef transit_leave_social;
int transit_leave_social_tableId(){return 382;};
BnsTables::Shared::TableRef transit_enter_social;
int transit_enter_social_tableId(){return 382;};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}