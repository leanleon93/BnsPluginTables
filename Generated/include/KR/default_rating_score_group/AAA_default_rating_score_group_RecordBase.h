/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct default_rating_score_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char season_contents_type;
char Pad_key_0[1];
__int16 group_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 min_rating_score;
__int32 max_rating_score;
__int32 default_rating_score;
bool is_placement_test;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 96; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) default_rating_score_group_RecordPtr // : DrRecordPtr
	{
		default_rating_score_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}