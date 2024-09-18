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
                __int8 job;
__int8 master_job_style;
__int32 index;
__int32 group_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		char Pad0[4];
wchar_t* job_style_stand_idle_show;
__int32 event_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 390; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedjobstylestandidle_RecordPtr // : DrRecordPtr
	{
		summonedjobstylestandidle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedjobstylestandidle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}