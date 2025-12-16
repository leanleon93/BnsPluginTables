/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_portal_list_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef portal_id[16];
__int32 portal_id_Size() const {return 16;};
int portal_id_tableId() const {return 481;};

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}