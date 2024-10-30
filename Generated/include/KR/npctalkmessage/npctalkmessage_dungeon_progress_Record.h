/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_dungeon_progress_Record : npctalkmessage_Record
	{
	public:
		BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 114;};

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}