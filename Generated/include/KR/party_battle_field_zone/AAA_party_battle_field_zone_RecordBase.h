/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class party_battle_field_zone_RecordSubType : __int32
    {
		party_battle_field_zone_record_sub_occupation_war = 0,
		party_battle_field_zone_record_sub_capture_the_flag = 1,
		party_battle_field_zone_record_sub_lead_the_ball = 2,
		party_battle_field_zone_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct party_battle_field_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 461;};
__int16 pc_max;
__int8 required_level;
__int8 required_mastery_level;
bool enable_team_matching;
bool enable_unrated_matching;
bool enable_unrated_join;
__int8 required_member_count_team_matching;
BnsTables::Shared::TableRef available_solo_matching_weekly_time;
int available_solo_matching_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef available_team_matching_weekly_time;
int available_team_matching_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef available_random_matching_weekly_time;
int available_random_matching_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef time_effect_weekly_time;
int time_effect_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef time_effect_weekly_name;
int time_effect_weekly_name_tableId(){return 420;};
__int16 ready_duration_second;
__int16 play_duration_second;
__int16 no_game_decision_duration_second;
char Pad0[2];
BnsTables::Shared::TableRef enter_alpha_side_pc_spawn;
int enter_alpha_side_pc_spawn_tableId(){return 470;};
BnsTables::Shared::TableRef enter_beta_side_pc_spawn;
int enter_beta_side_pc_spawn_tableId(){return 470;};
BnsTables::Shared::TableRef start_alpha_side_pc_spawn;
int start_alpha_side_pc_spawn_tableId(){return 470;};
BnsTables::Shared::TableRef start_beta_side_pc_spawn;
int start_beta_side_pc_spawn_tableId(){return 470;};
__int32 respawn_delay;
BnsTables::Shared::TableRef alpha_side_respawn;
int alpha_side_respawn_tableId(){return 471;};
BnsTables::Shared::TableRef beta_side_respawn;
int beta_side_respawn_tableId(){return 471;};
__int16 set_env_time[10];
BnsTables::Shared::TableRef set_env2_target[10];
int set_env2_target_tableId(){return 464;};
__int8 set_env_operation[10];
char Pad1[2];
BnsTables::Shared::TableRef set_env_operation_message;
int set_env_operation_message_tableId(){return 155;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef zone_name2;
int zone_name2_tableId(){return 420;};
BnsTables::Shared::TableRef zone_desc;
int zone_desc_tableId(){return 420;};
wchar_t* arena_minimap;
__int16 kill_score;
__int16 goal_score;
bool enable_infinite_hyper_energy;
char Pad2[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
BnsTables::Shared::TableRef zone_sub_desc;
int zone_sub_desc_tableId(){return 420;};
BnsTables::Shared::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 446;};
__int32 bonus_point_percent[2];
__int32 bonus_exp_percent[2];
__int16 vote_duration_second;
char Pad4[2];
__int32 vote_reward_point;
__int32 vote_reward_exp;
wchar_t* zone_enter_kismet_sequence_name[3];
wchar_t* result_kismet_sequence_name;
__int16 notify_msg_score_value[3];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 22); }
		static __int16 TableId() { return 271; }
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