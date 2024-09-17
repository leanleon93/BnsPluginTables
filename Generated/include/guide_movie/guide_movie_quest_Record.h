/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_quest_Record : guide_movie_Record
	{
	public:
		Data::TableRef acquire_quest_id;
int acquire_quest_id_tableId(){return 283;};
Data::TableRef complete_quest_id;
int complete_quest_id_tableId(){return 283;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}