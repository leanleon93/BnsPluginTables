/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_stand_by_persistant_zone_Record : zonetriggereventstage_Record
	{
	public:
		bool all_channel;
signed char max_channel;
signed char max_event_channel;
signed char min_growing_channel;
__int16 total_duration_minute[2];
__int32 total_duration_minute_Size() const {return 2;};
signed char persistant_zone_subtype;
char Pad_sub_0[3];
BnsTables::Shared::TableRef event_channel_text;
int event_channel_text_tableId() const {return 427;};
BnsTables::Shared::TableRef event_notify_diff_zone[6];
__int32 event_notify_diff_zone_Size() const {return 6;};
int event_notify_diff_zone_tableId() const {return 471;};
BnsTables::Shared::TableRef event_notify_diff_zone_msg;
int event_notify_diff_zone_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef event_notify_diff_channel_msg;
int event_notify_diff_channel_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef event_notify_msg;
int event_notify_msg_tableId() const {return 156;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}