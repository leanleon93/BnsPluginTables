/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct fielditemdrop_env_Record : fielditemdrop_Record
	{
	public:
		char Pad_sub_0[1];
__int8 drop_case;
__int8 drop_place;
char Pad_sub_1[2];
BnsTables::Shared::TableRef area;
int area_tableId(){return 456;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}