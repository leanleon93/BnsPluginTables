/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_quest_complete_Record : achievement_register_Record
	{
	public:
		Data::TableRef quest;
int quest_tableId(){return 283;};

		static __int32 SubType() { return 15; }
	};
#pragma pack(pop)
}