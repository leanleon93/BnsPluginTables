/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_complete_achievement_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
Data::TableRef boast_achievement;
int boast_achievement_tableId(){return 6;};

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}