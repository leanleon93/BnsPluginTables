/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_join_faction_Record : npctalkmessage_Record
	{
	public:
		__int8 population_statistics;
char Pad_sub_0[3];
Data::TableRef end_talk_social_ok;
int end_talk_social_ok_tableId(){return 367;};
Data::TableRef fail_population_message;
int fail_population_message_tableId(){return 260;};

		static __int32 SubType() { return 13; }
	};
#pragma pack(pop)
}