/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct boast_event_awakening_item_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
BnsTables::Shared::TableRef boast_item;
int boast_item_tableId(){return 195;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}