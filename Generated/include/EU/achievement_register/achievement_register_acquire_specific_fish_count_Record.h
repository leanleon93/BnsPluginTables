/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_acquire_specific_fish_count_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef fish;
int fish_tableId(){return 142;};

		static __int32 SubType() { return 65; }
	};
#pragma pack(pop)
}