/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_Record : zonetriggereventstage_Record
	{
	public:
		BnsTables::Shared::TableRef fail_cond[3];
int fail_cond_tableId(){return 457;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}