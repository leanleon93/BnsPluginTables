/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct event_contents_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 publisher;
char Pad0[3];
__int32 zone_id;
__int16 start_year;
__int8 start_month;
__int8 start_day;
__int8 start_hour;
char Pad1[1];
__int16 end_year;
__int8 end_month;
__int8 end_day;
__int8 end_hour;
char Pad2[1];
wchar_t* sub_level_ref;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 123; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_contents_RecordPtr // : DrRecordPtr
	{
		event_contents_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::event_contents_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}