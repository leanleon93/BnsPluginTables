/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_effect_attribute_Record : filter_Record
	{
	public:
		__int16 value[4];
__int32 value_Size() const {return 4;};
bool either;

		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}