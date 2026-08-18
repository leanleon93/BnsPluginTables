/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_immune_attribute_Record : effect_Record
	{
	public:
		__int16 immune_attribute[4];
__int32 immune_attribute_Size() const {return 4;};
__int64 immune_attribute_value;
__int64 immune_attribute_value_2;
__int64 immune_attribute_value_3;

		static __int32 SubType() { return 73; }
	};
#pragma pack(pop)
}