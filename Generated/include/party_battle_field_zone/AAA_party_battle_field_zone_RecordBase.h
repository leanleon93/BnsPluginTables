/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class party_battle_field_zone_RecordSubType : __int32
    {
		party_battle_field_zone_record_sub_occupation_war = 0,
		party_battle_field_zone_record_sub_capture_the_flag = 1,
		party_battle_field_zone_record_sub_lead_the_ball = 2,
		party_battle_field_zone_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct party_battle_field_zone_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone;
int zone_tableId(){return 443;};
__int16 pc_max;
__int8 required_level;
__int8 required_mastery_level;
bool enable_team_matching;
bool enable_unrated_matching;
bool enable_unrated_join;
__int8 required_member_count_team_matching;
Data::TableRef available_solo_matching_weekly_time;
int available_solo_matching_weekly_time_tableId(){return 431;};
Data::TableRef available_team_matching_weekly_time;
int available_team_matching_weekly_time_tableId(){return 431;};
Data::TableRef available_random_matching_weekly_time;
int available_random_matching_weekly_time_tableId(){return 431;};
Data::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId(){return 431;};
Data::TableRef time_effect_weekly_time;
int time_effect_weekly_time_tableId(){return 431;};
Data::TableRef time_effect_weekly_name;
int time_effect_weekly_name_tableId(){return 405;};
__int16 ready_duration_second;
__int16 play_duration_second;
__int16 no_game_decision_duration_second;
char Pad0[2];
Data::TableRef enter_alpha_side_pc_spawn;
int enter_alpha_side_pc_spawn_tableId(){return 452;};
Data::TableRef enter_beta_side_pc_spawn;
int enter_beta_side_pc_spawn_tableId(){return 452;};
Data::TableRef start_alpha_side_pc_spawn;
int start_alpha_side_pc_spawn_tableId(){return 452;};
Data::TableRef start_beta_side_pc_spawn;
int start_beta_side_pc_spawn_tableId(){return 452;};
__int32 respawn_delay;
Data::TableRef alpha_side_respawn;
int alpha_side_respawn_tableId(){return 453;};
Data::TableRef beta_side_respawn;
int beta_side_respawn_tableId(){return 453;};
__int16 set_env_time[10];
Data::TableRef set_env2_target[10];
int set_env2_target_tableId(){return 446;};
__int8 set_env_operation[10];
char Pad1[2];
Data::TableRef set_env_operation_message;
int set_env_operation_message_tableId(){return 151;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef zone_name2;
int zone_name2_tableId(){return 405;};
Data::TableRef zone_desc;
int zone_desc_tableId(){return 405;};
wchar_t* arena_minimap;
__int16 kill_score;
__int16 goal_score;
bool enable_infinite_hyper_energy;
char Pad2[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
Data::TableRef zone_sub_desc;
int zone_sub_desc_tableId(){return 405;};
Data::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 bonus_point_percent[2];
__int32 bonus_exp_percent[2];
__int16 vote_duration_second;
char Pad4[2];
__int32 vote_reward_point;
__int32 vote_reward_exp;
wchar_t* zone_enter_kismet_sequence_name[3];
wchar_t* result_kismet_sequence_name;
__int16 notify_msg_score_value[3];

		static TableVersion Version() { return TableVersion(1, 22); }
		static __int16 TableId() { return 261; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) party_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		party_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::party_battle_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}