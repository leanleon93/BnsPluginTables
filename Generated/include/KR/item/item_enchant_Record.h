/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_enchant_Record : item_Record
	{
	public:
		signed char enchant_type;
char Pad_sub_0[3];
__int32 transient_enchant_duration;
BnsTables::Shared::TableRef transient_ehchant_effect[2];
__int32 transient_ehchant_effect_Size() const {return 2;};
int transient_ehchant_effect_tableId() const {return 115;};

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}