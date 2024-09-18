/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct fielditemdrop_npc_deadbody_Record : fielditemdrop_Record
	{
	public:
		char Pad_sub_0[1];
__int16 quest_id;
__int8 quest_mission_step;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}