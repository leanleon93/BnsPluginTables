/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_party_battle_win_count_Record : achievement_register_Record
	{
	public:
		signed char party_battle_type;

		static __int32 SubType() { return 60; }
	};
#pragma pack(pop)
}