/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct alarm_message_time_table_Record : BnsTables::Shared::DrEl
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
bool enable;
signed char alarm_type;
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
BnsTables::Shared::TableRef start_gamemessage;
int start_gamemessage_tableId() const {return 155;};
BnsTables::Shared::TableRef start_gamemessage_remain;
int start_gamemessage_remain_tableId() const {return 155;};
BnsTables::Shared::TableRef end_gamemessage;
int end_gamemessage_tableId() const {return 155;};
BnsTables::Shared::TableRef end_gamemessage_remain;
int end_gamemessage_remain_tableId() const {return 155;};
BnsTables::Shared::TableRef clock_alarm_desc_start;
int clock_alarm_desc_start_tableId() const {return 420;};
BnsTables::Shared::TableRef clock_alarm_desc_progressing;
int clock_alarm_desc_progressing_tableId() const {return 420;};
BnsTables::Shared::TableRef clock_alarm_desc_end;
int clock_alarm_desc_end_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 10; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) alarm_message_time_table_RecordPtr // : DrRecordPtr
	{
		alarm_message_time_table_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}