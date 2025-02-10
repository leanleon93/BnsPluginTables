/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class contents_schedule_RecordSubType : __int32
    {
		contents_schedule_record_sub_random_store_1 = 0,
		contents_schedule_record_sub_random_store_2 = 1,
		contents_schedule_record_sub_treasure_board = 2,
		contents_schedule_record_sub_unlocated_store = 3,
		contents_schedule_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct contents_schedule_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* start_time;
wchar_t* end_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 74; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_schedule_RecordPtr // : DrRecordPtr
	{
		contents_schedule_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}