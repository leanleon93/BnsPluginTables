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
		__int8 expedition_type;
char Pad_sub_0[3];
BnsTables::Shared::TableRef expedition;
int expedition_tableId(){return 435;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}