/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct achievement_register_tendency_quest_complete_count_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::ExplicitTableRef required_attraction;
signed char tendency_id;

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}