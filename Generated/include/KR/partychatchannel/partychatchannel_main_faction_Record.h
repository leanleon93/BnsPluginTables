/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_partychatchannel_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct partychatchannel_main_faction_Record : partychatchannel_Record
	{
	public:
		BnsTables::Shared::TableRef faction_1_party_match;
int faction_1_party_match_tableId() const {return 288;};
BnsTables::Shared::TableRef faction_2_party_match;
int faction_2_party_match_tableId() const {return 288;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}