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
		__int8 population_statistics;
char Pad_sub_0[3];
BnsTables::Shared::TableRef msg[2];
int msg_tableId(){return 270;};
BnsTables::Shared::TableRef faction[2];
int faction_tableId(){return 135;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}