/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_manipulate_env_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef env2[8];
int env2_tableId(){return 462;};
__int8 env2_state[8];

		static __int32 SubType() { return 20; }
	};
#pragma pack(pop)
}