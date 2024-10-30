/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct guide_movie_enter_zone_Record : guide_movie_Record
	{
	public:
		BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 461;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}