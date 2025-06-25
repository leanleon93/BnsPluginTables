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
int faction_tableId() const {return 139;};
signed char race;
signed char target_job;
signed char above_level;
signed char below_level;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}