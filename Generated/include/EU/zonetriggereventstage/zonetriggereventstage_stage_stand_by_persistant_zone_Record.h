/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_stand_by_persistant_zone_Record : zonetriggereventstage_Record
	{
	public:
		bool all_channel;
__int8 max_channel;
__int8 max_event_channel;
__int8 min_growing_channel;
__int16 total_duration_minute[2];
__int8 persistant_zone_subtype;
char Pad_sub_0[3];
BnsTables::Shared::TableRef event_channel_text;
int event_channel_text_tableId(){return 405;};
BnsTables::Shared::TableRef event_notify_diff_zone[6];
int event_notify_diff_zone_tableId(){return 443;};
BnsTables::Shared::TableRef event_notify_diff_zone_msg;
int event_notify_diff_zone_msg_tableId(){return 151;};
BnsTables::Shared::TableRef event_notify_diff_channel_msg;
int event_notify_diff_channel_msg_tableId(){return 151;};
BnsTables::Shared::TableRef event_notify_msg;
int event_notify_msg_tableId(){return 151;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}