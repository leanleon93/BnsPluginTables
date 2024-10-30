/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct guide_movie_level_Record : guide_movie_Record
	{
	public:
		signed char normal_level;
signed char mastery_level;
signed char account_level;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}