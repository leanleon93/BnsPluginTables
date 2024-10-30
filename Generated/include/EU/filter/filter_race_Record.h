/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_race_Record : filter_Record
	{
	public:
		signed char value[4];
__int32 value_Size() const {return 4;};
bool either;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}