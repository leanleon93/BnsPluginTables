/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct fielditemdrop_quest_Record : fielditemdrop_Record
	{
	public:
		char Pad_sub_0[1];
signed char drop_place;
char Pad_sub_1[3];
BnsTables::Shared::TableRef area;
int area_tableId() const {return 474;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}