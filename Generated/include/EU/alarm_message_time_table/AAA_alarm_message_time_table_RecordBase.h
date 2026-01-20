/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
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
int weekly_time_table_tableId() const {return 464;};
signed char alarm_type;
char Pad0[3];
BnsTables::Shared::TableRef start_gamemessage;
int start_gamemessage_tableId() const {return 160;};
BnsTables::Shared::TableRef start_gamemessage_remain;
int start_gamemessage_remain_tableId() const {return 160;};
BnsTables::Shared::TableRef end_gamemessage;
int end_gamemessage_tableId() const {return 160;};
BnsTables::Shared::TableRef end_gamemessage_remain;
int end_gamemessage_remain_tableId() const {return 160;};
BnsTables::Shared::TableRef clock_alarm_desc_start;
int clock_alarm_desc_start_tableId() const {return 438;};
BnsTables::Shared::TableRef clock_alarm_desc_progressing;
int clock_alarm_desc_progressing_tableId() const {return 438;};
BnsTables::Shared::TableRef clock_alarm_desc_end;
int clock_alarm_desc_end_tableId() const {return 438;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
BnsTables::Shared::TableRef hud_icon_tooltip_desc;
int hud_icon_tooltip_desc_tableId() const {return 438;};
wchar_t* hud_icon_normal;
wchar_t* hud_icon_activated;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 10; }
		static __int32 SubType() { return -1; }
		enum class alarm_type {
			none = 0,
			bns_tv_end = 1,
			fevertime_duel_end = 2,
			fevertime_party_battle_field_end = 3,
			fevertime_tendency_field_end = 4,
			championship_duel_end = 5,
			guild_battle_field_end = 6,
			guild_combat_end = 7,
			peaktime_end = 8,
			invade_town_end = 9,
			training_duel_end = 10,
			training_party_battle_field_end = 11,
			faction_battle_field_end = 12,
			public_raid_entrance_end = 13,
			public_raid_2_entrance_end = 14,
			public_raid_3_entrance_end = 15,
			public_raid_5_entrance_end = 16,
			timelimit_duel_solo_end = 17,
			timelimit_duel_tagmatch_end = 18,
			battleroyal_entrance_end = 19,
			boardgacha_end = 20,
			bns_tv_start = 21,
			fevertime_duel_start = 22,
			fevertime_party_battle_field_start = 23,
			fevertime_tendency_field_start = 24,
			championship_duel_start = 25,
			guild_battle_field_start = 26,
			guild_combat_start = 27,
			peaktime_start = 28,
			invade_town_start = 29,
			training_duel_start = 30,
			training_party_battle_field_start = 31,
			faction_battle_field_start = 32,
			public_raid_entrance_start = 33,
			public_raid_2_entrance_start = 34,
			public_raid_3_entrance_start = 35,
			public_raid_5_entrance_start = 36,
			timelimit_duel_solo_start = 37,
			timelimit_duel_tagmatch_start = 38,
			battleroyal_entrance_start = 39,
			boardgacha_start = 40,
			attendance_playable = 41,
			attendance_reset = 42,
			random_store_reset = 43,
			daily_quest_reset = 44,
			weekly_quest_reset = 45,
			daily_dungeon_reset = 46,
			raid_dungeon_reset = 47,
			goods_store_today_goods_reset = 48,
			attendance_time_table_reset = 49,
			public_raid_entrance_notify = 50,
			public_raid_2_entrance_notify = 51,
			public_raid_3_entrance_notify = 52,
			public_raid_5_entrance_notify = 53,
			battleroyal_entrance_notify = 54,
			life_contents_time_table_reset = 55,
			energy_point_reward_reset = 56,
			dungeon_bonus_reward_reset = 57,
			start_new_type = 58,
			worldboss = 59,
			alarm_message_time_table = 60,
		};
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