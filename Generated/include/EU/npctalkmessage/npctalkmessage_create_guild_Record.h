/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct npctalkmessage_create_guild_Record : npctalkmessage_Record
	{
	public:
		BnsTables::Shared::TableRef end_talk_social_ok;
int end_talk_social_ok_tableId() const {return 397;};
wchar_t* end_talk_sound_ok;

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}