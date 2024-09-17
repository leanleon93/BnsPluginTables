/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct contents_schedule_Record : DrEl
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

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 73; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_schedule_RecordPtr // : DrRecordPtr
	{
		contents_schedule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_schedule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}