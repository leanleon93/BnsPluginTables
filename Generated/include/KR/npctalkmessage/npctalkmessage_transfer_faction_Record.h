/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_transfer_faction_Record : npctalkmessage_Record
	{
	public:
		signed char population_statistics;
char Pad_sub_0[3];
wchar_t* end_talk_sound_ok;
BnsTables::Shared::TableRef fail_population_message;
int fail_population_message_tableId() const {return 282;};

		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}