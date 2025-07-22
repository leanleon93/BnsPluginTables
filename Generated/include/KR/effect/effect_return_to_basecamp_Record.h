/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_return_to_basecamp_Record : effect_Record
	{
	public:
		char Pad_sub_0[3];
BnsTables::Shared::TableRef basecamp;
int basecamp_tableId() const {return 474;};

		static __int32 SubType() { return 49; }
	};
#pragma pack(pop)
}