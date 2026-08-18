/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct npctalkmessage_craft_selection_Record : npctalkmessage_Record
	{
	public:
		BnsTables::Shared::TableRef msg_set[7];
__int32 msg_set_Size() const {return 7;};
int msg_set_tableId() const {return 313;};

		static __int32 SubType() { return 22; }
	};
#pragma pack(pop)
}