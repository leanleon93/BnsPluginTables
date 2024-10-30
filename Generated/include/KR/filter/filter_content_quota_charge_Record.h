/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct filter_content_quota_charge_Record : filter_Record
	{
	public:
		BnsTables::Shared::TableRef content_quota;
int content_quota_tableId() const {return 67;};
signed char op;
char Pad_sub_0[3];
__int64 charge_value;

		static __int32 SubType() { return 42; }
	};
#pragma pack(pop)
}