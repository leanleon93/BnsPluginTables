/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_arenaportal_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct arenaportal_duel_Record : arenaportal_Record
	{
	public:
		BnsTables::Shared::TableRef death_match_1vs1[4];
int death_match_1vs1_tableId(){return 108;};
BnsTables::Shared::TableRef death_match_unrated[4];
int death_match_unrated_tableId(){return 108;};
BnsTables::Shared::TableRef tag_match_3vs3[4];
int tag_match_3vs3_tableId(){return 108;};
BnsTables::Shared::TableRef tag_match_unrated[4];
int tag_match_unrated_tableId(){return 108;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}