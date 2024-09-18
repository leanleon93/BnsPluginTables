/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct jobstylestandidle_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
__int32 index;
__int32 group_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		char Pad0[4];
wchar_t* job_style_stand_idle_show;
__int32 event_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 234; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobstylestandidle_RecordPtr // : DrRecordPtr
	{
		jobstylestandidle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jobstylestandidle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}