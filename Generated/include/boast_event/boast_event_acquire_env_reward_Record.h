/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_acquire_env_reward_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
Data::TableRef boast_from_env;
int boast_from_env_tableId(){return 444;};
Data::TableRef boast_item;
int boast_item_tableId(){return 189;};

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}