/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_quest_complete_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 306;};
signed char mission_step;
char Pad_sub_0[1];
__int16 count;
signed char count_op;

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}