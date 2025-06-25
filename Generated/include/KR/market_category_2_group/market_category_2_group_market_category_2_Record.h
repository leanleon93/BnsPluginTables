/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_market_category_2_group_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct market_category_2_group_market_category_2_Record : market_category_2_group_Record
	{
	public:
		signed char market_category_2;
char Pad_sub_0[3];
BnsTables::Shared::TableRef market_category_3_group[15];
__int32 market_category_3_group_Size() const {return 15;};
int market_category_3_group_tableId() const {return 260;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}