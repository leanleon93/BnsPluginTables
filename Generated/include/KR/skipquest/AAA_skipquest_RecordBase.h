/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class skipquest_RecordSubType : __int32
    {
		skipquest_record_sub_epic = 0,
		skipquest_record_sub_normal = 1,
		skipquest_record_sub_job = 2,
		skipquest_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skipquest_Record : BnsTables::Shared::DrEl
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
		__int16 level;
__int16 mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 298;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 381; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skipquest_RecordPtr // : DrRecordPtr
	{
		skipquest_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}