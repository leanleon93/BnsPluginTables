/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct npctalkmessage_branch_Record : npctalkmessage_Record
	{
	public:
		bool initial_branch;
char Pad_sub_0[3];
BnsTables::Shared::TableRef branch_msg[4];
__int32 branch_msg_Size() const {return 4;};
int branch_msg_tableId() const {return 281;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}