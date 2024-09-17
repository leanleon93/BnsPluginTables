/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_treasureboard_season_reward_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
Data::TableRef boast_item;
int boast_item_tableId(){return 189;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}