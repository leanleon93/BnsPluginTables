/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct boast_event_buy_random_store_item_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
BnsTables::Shared::TableRef boast_from_random_store;
int boast_from_random_store_tableId(){return 292;};
BnsTables::Shared::TableRef boast_item;
int boast_item_tableId(){return 189;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}