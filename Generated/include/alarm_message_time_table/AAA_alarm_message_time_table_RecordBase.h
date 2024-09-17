/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct alarm_message_time_table_Record : DrEl
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
__int8 alarm_type;
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
Data::TableRef start_gamemessage;
int start_gamemessage_tableId(){return 151;};
Data::TableRef start_gamemessage_remain;
int start_gamemessage_remain_tableId(){return 151;};
Data::TableRef end_gamemessage;
int end_gamemessage_tableId(){return 151;};
Data::TableRef end_gamemessage_remain;
int end_gamemessage_remain_tableId(){return 151;};
Data::TableRef clock_alarm_desc_start;
int clock_alarm_desc_start_tableId(){return 405;};
Data::TableRef clock_alarm_desc_progressing;
int clock_alarm_desc_progressing_tableId(){return 405;};
Data::TableRef clock_alarm_desc_end;
int clock_alarm_desc_end_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 10; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) alarm_message_time_table_RecordPtr // : DrRecordPtr
	{
		alarm_message_time_table_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::alarm_message_time_table_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}