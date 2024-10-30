/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_effect_stack_count_Record : filter_Record
	{
	public:
		wchar_t* effect_type;
signed char effect_slot;
signed char term_op;
signed char op[2];
__int32 op_Size() const {return 2;};
char Pad_sub_0[2];
__int64 value[2];
__int32 value_Size() const {return 2;};

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}