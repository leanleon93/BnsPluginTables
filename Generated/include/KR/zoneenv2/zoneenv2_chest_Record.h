/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zoneenv2_chest_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
__int8 expedition_type;
char Pad_sub_1[3];
BnsTables::Shared::TableRef expedition;
int expedition_tableId(){return 450;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}