/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct mapunit_attraction_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::ExplicitTableRef attraction;
float attraction_position_x;
float attraction_position_y;
BnsTables::Shared::TableRef party_chat_channel;
int party_chat_channel_tableId() const {return 284;};

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}