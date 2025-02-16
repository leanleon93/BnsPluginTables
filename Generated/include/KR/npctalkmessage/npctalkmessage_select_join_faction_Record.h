/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_select_join_faction_Record : npctalkmessage_Record
	{
	public:
		signed char population_statistics;
char Pad_sub_0[3];
BnsTables::Shared::TableRef msg[2];
__int32 msg_Size() const {return 2;};
int msg_tableId() const {return 275;};
BnsTables::Shared::TableRef faction[2];
__int32 faction_Size() const {return 2;};
int faction_tableId() const {return 136;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}