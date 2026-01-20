/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_chest_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
signed char expedition_type;
char Pad_sub_1[3];
BnsTables::Shared::TableRef expedition;
int expedition_tableId() const {return 469;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}