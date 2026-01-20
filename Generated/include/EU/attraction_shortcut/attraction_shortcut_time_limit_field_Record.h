/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_attraction_shortcut_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct attraction_shortcut_time_limit_field_Record : attraction_shortcut_Record
	{
	public:
		BnsTables::Shared::TableRef time_limit_field_zone;
int time_limit_field_zone_tableId() const {return 439;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}