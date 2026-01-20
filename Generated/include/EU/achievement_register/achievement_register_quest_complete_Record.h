/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct achievement_register_quest_complete_Record : achievement_register_Record
	{
	public:
		BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 309;};

		static __int32 SubType() { return 15; }
	};
#pragma pack(pop)
}