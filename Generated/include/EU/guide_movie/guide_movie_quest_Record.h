/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct guide_movie_quest_Record : guide_movie_Record
	{
	public:
		BnsTables::Shared::TableRef acquire_quest_id;
int acquire_quest_id_tableId() const {return 298;};
BnsTables::Shared::TableRef complete_quest_id;
int complete_quest_id_tableId() const {return 298;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}