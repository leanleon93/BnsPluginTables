/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_arenaportal_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct arenaportal_public_raid_Record : arenaportal_Record
	{
	public:
		signed char public_raid_mode;
char Pad_sub_0[3];
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId() const {return 303;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}