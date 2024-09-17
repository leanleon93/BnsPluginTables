/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_partychatchannel_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct partychatchannel_main_faction_Record : partychatchannel_Record
	{
	public:
		Data::TableRef faction_1_party_match;
int faction_1_party_match_tableId(){return 263;};
Data::TableRef faction_2_party_match;
int faction_2_party_match_tableId(){return 263;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}