/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_questmessage_Record : npctalkmessage_Record
	{
	public:
		Data::TableRef end_talk_social_quest_ok;
int end_talk_social_quest_ok_tableId(){return 367;};
wchar_t* end_talk_sound_quest_ok;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}