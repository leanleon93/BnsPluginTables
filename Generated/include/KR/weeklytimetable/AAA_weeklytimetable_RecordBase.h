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
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
bool enable;
signed char sun_start_hour[12];
__int32 sun_start_hour_Size() const {return 12;};
signed char sun_end_hour[12];
__int32 sun_end_hour_Size() const {return 12;};
signed char mon_start_hour[12];
__int32 mon_start_hour_Size() const {return 12;};
signed char mon_end_hour[12];
__int32 mon_end_hour_Size() const {return 12;};
signed char tue_start_hour[12];
__int32 tue_start_hour_Size() const {return 12;};
signed char tue_end_hour[12];
__int32 tue_end_hour_Size() const {return 12;};
signed char wed_start_hour[12];
__int32 wed_start_hour_Size() const {return 12;};
signed char wed_end_hour[12];
__int32 wed_end_hour_Size() const {return 12;};
signed char thu_start_hour[12];
__int32 thu_start_hour_Size() const {return 12;};
signed char thu_end_hour[12];
__int32 thu_end_hour_Size() const {return 12;};
signed char fri_start_hour[12];
__int32 fri_start_hour_Size() const {return 12;};
signed char fri_end_hour[12];
__int32 fri_end_hour_Size() const {return 12;};
signed char sat_start_hour[12];
__int32 sat_start_hour_Size() const {return 12;};
signed char sat_end_hour[12];
__int32 sat_end_hour_Size() const {return 12;};
signed char start_minute;
signed char end_minute;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 453; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weeklytimetable_RecordPtr // : DrRecordPtr
	{
		weeklytimetable_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}