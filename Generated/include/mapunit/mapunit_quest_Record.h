/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_quest_Record : mapunit_Record
	{
	public:
		bool ignore_quest_map_location;
__int8 force_quest_indicator_map_depth;
bool force_tendency_simple_quest_indicator_to_change;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}