/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct filter_quest_complete_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef quest;
int quest_tableId(){return 294;};
__int8 mission_step;
char Pad_sub_0[1];
__int16 count;
__int8 count_op;

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}