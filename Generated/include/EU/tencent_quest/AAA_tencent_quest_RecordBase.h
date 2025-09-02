/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct tencent_quest_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 questid;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool check_vitality;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 431; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tencent_quest_RecordPtr // : DrRecordPtr
	{
		tencent_quest_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}