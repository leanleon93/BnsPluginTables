/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct boast_event_treasureboard_season_reward_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
BnsTables::Shared::TableRef boast_item;
int boast_item_tableId() const {return 198;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}