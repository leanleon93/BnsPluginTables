/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct tendency_field_Record : DrEl
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
Data::TableRef main_zone;
int main_zone_tableId(){return 443;};
Data::TableRef sub_zone[7];
int sub_zone_tableId(){return 443;};
bool enable_change_channel;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[1];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
bool required_activated_main_faction;
bool restrict_enter_zone_when_manifest_tendency;
char Pad1[1];
__int16 stand_by_duration_minute;
char Pad2[2];
__int32 in_progress_duration_minute;
__int8 tendency_1_max_play_value;
__int8 tendency_2_max_play_value;
__int8 tendency_3_max_play_value;
__int8 tendency_1_reset_score_type;
__int8 tendency_2_reset_score_type;
__int8 tendency_3_reset_score_type;
char Pad3[2];
__int64 quest_pack_simple_quest_refresh_money;
Data::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 weekly_bonus_point_percent[2];
Data::TableRef group;
int group_tableId(){return 16;};
bool enable_infinite_hyper_energy;
bool disable_move_to_arena;
bool disable_move_to_skill_training_room;
bool enable_change_faction_costume;
bool enable_set_guild_meeting_place;
bool enable_warp_to_guild_member;
bool enable_warp_to_pvp_result_opponent;
char Pad4[1];
wchar_t* tendency_start_kismet_name[3];
wchar_t* tendency_end_kismet_name[3];
Data::TableRef tendency_field_name2;
int tendency_field_name2_tableId(){return 405;};
Data::TableRef tendency_field_desc;
int tendency_field_desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad5[3];
Data::TableRef tendency_standby_msg[3];
int tendency_standby_msg_tableId(){return 151;};
Data::TableRef tendency_start_msg[3];
int tendency_start_msg_tableId(){return 151;};
Data::TableRef tendency_timeup_alarm_msg[3];
int tendency_timeup_alarm_msg_tableId(){return 151;};
Data::TableRef tendency_end_msg[3];
int tendency_end_msg_tableId(){return 151;};
Data::TableRef guide_standby_msg[3];
int guide_standby_msg_tableId(){return 151;};
Data::TableRef guide_start_msg[3];
int guide_start_msg_tableId(){return 151;};
Data::TableRef guide_timeup_alarm_msg[3];
int guide_timeup_alarm_msg_tableId(){return 151;};
Data::TableRef guide_end_msg[3];
int guide_end_msg_tableId(){return 151;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad6[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 22); }
		static __int16 TableId() { return 403; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tendency_field_RecordPtr // : DrRecordPtr
	{
		tendency_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::tendency_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}