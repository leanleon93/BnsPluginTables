/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class public_raid_event_RecordSubType : __int32
    {
		public_raid_event_record_sub_score_event = 0,
		public_raid_event_record_sub_count = 1,
    };
#pragma pack(push, 1)
	struct public_raid_event_Record : DrEl
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
__int32 event_duration;
__int8 event_type;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 280; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) public_raid_event_RecordPtr // : DrRecordPtr
	{
		public_raid_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::public_raid_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}