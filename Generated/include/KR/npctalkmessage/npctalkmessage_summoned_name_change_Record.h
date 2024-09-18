/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_summoned_name_change_Record : npctalkmessage_Record
	{
	public:
		wchar_t* end_talk_show_ok;
wchar_t* end_talk_sound_ok;

		static __int32 SubType() { return 11; }
	};
#pragma pack(pop)
}