/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_airdash_Record : zoneenv2_Record
	{
	public:
		__int8 airdash_level;
char Pad_sub_0[3];
wchar_t* kismet;

		static __int32 SubType() { return 11; }
	};
#pragma pack(pop)
}