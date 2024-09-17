/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct job_change_quest_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 acquire_quest[4];
__int16 complete_quest[16];
__int16 reset_quest[4];
__int16 reset_quest_free[16];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 221; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_quest_RecordPtr // : DrRecordPtr
	{
		job_change_quest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_quest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}