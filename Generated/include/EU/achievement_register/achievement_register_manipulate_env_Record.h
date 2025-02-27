/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_manipulate_env_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef env2[8];
__int32 env2_Size() const {return 8;};
int env2_tableId() const {return 470;};
signed char env2_state[8];
__int32 env2_state_Size() const {return 8;};

		static __int32 SubType() { return 20; }
	};
#pragma pack(pop)
}