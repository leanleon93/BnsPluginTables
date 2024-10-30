/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct job_change_quest_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 acquire_quest[4];
__int32 acquire_quest_Size() const {return 4;};
__int16 complete_quest[16];
__int32 complete_quest_Size() const {return 16;};
__int16 reset_quest[4];
__int32 reset_quest_Size() const {return 4;};
__int16 reset_quest_free[16];
__int32 reset_quest_free_Size() const {return 16;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 228; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_quest_RecordPtr // : DrRecordPtr
	{
		job_change_quest_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}