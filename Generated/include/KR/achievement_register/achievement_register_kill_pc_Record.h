/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_kill_pc_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef faction;
int faction_tableId(){return 135;};
__int8 race;
__int8 target_job;
__int8 above_level;
__int8 below_level;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}