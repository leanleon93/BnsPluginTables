/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct summonedjobstylestandidle_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char master_job_style;
char Pad_key_0[2];
__int32 index;
__int32 group_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* job_style_stand_idle_show;
__int32 event_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 405; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedjobstylestandidle_RecordPtr // : DrRecordPtr
	{
		summonedjobstylestandidle_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}