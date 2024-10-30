/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zoneenv2_fishing_point_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef fishing_field;
int fishing_field_tableId() const {return 149;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}