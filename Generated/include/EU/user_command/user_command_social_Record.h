/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_user_command_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct user_command_social_Record : user_command_Record
	{
	public:
		__int8 social_type;
char Pad_sub_0[3];
BnsTables::Shared::TableRef talk_social;
int talk_social_tableId(){return 399;};
BnsTables::Shared::TableRef state_social;
int state_social_tableId(){return 381;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}