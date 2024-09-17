/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct jobstylestandidle_Record : DrEl
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

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 227; }
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