/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_portal_list_Record : zoneenv2_Record
	{
	public:
		Data::TableRef portal_id[16];
int portal_id_tableId(){return 444;};

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}