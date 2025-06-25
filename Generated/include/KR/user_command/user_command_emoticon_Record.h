/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_user_command_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct user_command_emoticon_Record : user_command_Record
	{
	public:
		BnsTables::Shared::TableRef emoticon;
int emoticon_tableId() const {return 121;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}