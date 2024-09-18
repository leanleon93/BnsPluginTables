/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct filter_prop_Record : filter_Record
	{
	public:
		__int16 field;
__int8 op;
char Pad_sub_0[1];
__int64 value;

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}