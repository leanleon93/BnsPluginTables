/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_contents_guide_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct contents_guide_boss_monster_Record : contents_guide_Record
	{
	public:
		BnsTables::Shared::TableRef boss_id;
int boss_id_tableId() const {return 276;};
BnsTables::Shared::TableRef linked_boss_id;
int linked_boss_id_tableId() const {return 276;};
BnsTables::Shared::TableRef boss_description;
int boss_description_tableId() const {return 434;};
BnsTables::Shared::TableRef boss_position_description;
int boss_position_description_tableId() const {return 434;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}