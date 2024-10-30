/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_attraction_popup_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef env_entrance;
int env_entrance_tableId() const {return 121;};

		static __int32 SubType() { return 18; }
	};
#pragma pack(pop)
}