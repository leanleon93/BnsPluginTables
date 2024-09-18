/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct weeklytimetable_Record : BnsTables::Shared::DrEl
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
bool enable;
__int8 sun_start_hour[12];
__int8 sun_end_hour[12];
__int8 mon_start_hour[12];
__int8 mon_end_hour[12];
__int8 tue_start_hour[12];
__int8 tue_end_hour[12];
__int8 wed_start_hour[12];
__int8 wed_end_hour[12];
__int8 thu_start_hour[12];
__int8 thu_end_hour[12];
__int8 fri_start_hour[12];
__int8 fri_end_hour[12];
__int8 sat_start_hour[12];
__int8 sat_end_hour[12];
__int8 start_minute;
__int8 end_minute;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 446; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weeklytimetable_RecordPtr // : DrRecordPtr
	{
		weeklytimetable_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weeklytimetable_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}