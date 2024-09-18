/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct default_rating_score_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 season_contents_type;
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
		static __int16 TableId() { return 95; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) default_rating_score_group_RecordPtr // : DrRecordPtr
	{
		default_rating_score_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::default_rating_score_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}