/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct public_raid_public_raid_4_Record : public_raid_Record
	{
	public:
		BnsTables::Shared::TableRef raid_dungeon;
int raid_dungeon_tableId() const {return 316;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}