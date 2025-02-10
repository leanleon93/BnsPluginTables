/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_join_faction_Record : npctalkmessage_Record
	{
	public:
		signed char population_statistics;
char Pad_sub_0[3];
BnsTables::Shared::TableRef end_talk_social_ok;
int end_talk_social_ok_tableId() const {return 387;};
BnsTables::Shared::TableRef fail_population_message;
int fail_population_message_tableId() const {return 274;};

		static __int32 SubType() { return 13; }
	};
#pragma pack(pop)
}