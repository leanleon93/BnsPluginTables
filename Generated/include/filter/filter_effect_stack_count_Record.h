/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_effect_stack_count_Record : filter_Record
	{
	public:
		wchar_t* effect_type;
__int8 effect_slot;
__int8 term_op;
__int8 op[2];
char Pad_sub_0[2];
__int64 value[2];

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}