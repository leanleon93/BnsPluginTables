/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class alarm_message_time_table_RecordSubType : __int32
    {
		alarm_message_time_table_record_sub_none = 0,
		alarm_message_time_table_record_sub_world_boss = 1,
		alarm_message_time_table_record_sub_party_battle_field_zone = 2,
		alarm_message_time_table_record_sub_public_raid = 3,
		alarm_message_time_table_record_sub_count = 4,
    };
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
BnsTables::Shared::TableRef weekly_time_table;
int weekly_time_table_tableId() const {return 453;};
signed char alarm_type;
char Pad0[3];
BnsTables::Shared::TableRef start_gamemessage;
int start_gamemessage_tableId() const {return 156;};
BnsTables::Shared::TableRef start_gamemessage_remain;
int start_gamemessage_remain_tableId() const {return 156;};
BnsTables::Shared::TableRef end_gamemessage;
int end_gamemessage_tableId() const {return 156;};
BnsTables::Shared::TableRef end_gamemessage_remain;
int end_gamemessage_remain_tableId() const {return 156;};
BnsTables::Shared::TableRef clock_alarm_desc_start;
int clock_alarm_desc_start_tableId() const {return 427;};
BnsTables::Shared::TableRef clock_alarm_desc_progressing;
int clock_alarm_desc_progressing_tableId() const {return 427;};
BnsTables::Shared::TableRef clock_alarm_desc_end;
int clock_alarm_desc_end_tableId() const {return 427;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
BnsTables::Shared::TableRef hud_icon_tooltip_desc;
int hud_icon_tooltip_desc_tableId() const {return 427;};
wchar_t* hud_icon_normal;
wchar_t* hud_icon_activated;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 3); }
		static __int16 TableId() { return 10; }
		static __int32 SubType() { return -1; }
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