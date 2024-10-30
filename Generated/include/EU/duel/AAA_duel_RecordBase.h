/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char duel_type;
signed char max_round_count;
signed char round_win_count;
signed char round_count;
__int32 round_start_countdown_duration;
__int32 round_preparation_duration;
__int32 round_duration;
__int32 round_restart_duration;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 461;};
BnsTables::Shared::TableRef arena_outside_alpha_side_pc_spawn[3];
__int32 arena_outside_alpha_side_pc_spawn_Size() const {return 3;};
int arena_outside_alpha_side_pc_spawn_tableId() const {return 470;};
BnsTables::Shared::TableRef arena_outside_beta_side_pc_spawn[3];
__int32 arena_outside_beta_side_pc_spawn_Size() const {return 3;};
int arena_outside_beta_side_pc_spawn_tableId() const {return 470;};
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 115;};
bool is_unrated_match;
char Pad0[3];
BnsTables::Shared::TableRef loading_description_1;
int loading_description_1_tableId() const {return 420;};
BnsTables::Shared::TableRef loading_description_2;
int loading_description_2_tableId() const {return 420;};
BnsTables::Shared::IconRef loading_icon;
BnsTables::Shared::TableRef boast;
int boast_tableId() const {return 42;};
BnsTables::Shared::TableRef attraction_quest[5];
__int32 attraction_quest_Size() const {return 5;};
int attraction_quest_tableId() const {return 294;};
bool ui_filter_attraction_quest_only;
char Pad1[3];
BnsTables::Shared::TableRef duel_name2;
int duel_name2_tableId() const {return 420;};
BnsTables::Shared::TableRef duel_desc;
int duel_desc_tableId() const {return 420;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
BnsTables::Shared::TableRef weekly_time_table_for_added_reward[2];
__int32 weekly_time_table_for_added_reward_Size() const {return 2;};
int weekly_time_table_for_added_reward_tableId() const {return 446;};
__int32 bonus_point_percent[2];
__int32 bonus_point_percent_Size() const {return 2;};
__int32 bonus_exp_percent[2];
__int32 bonus_exp_percent_Size() const {return 2;};
signed char camera_world_pos_index;
char Pad2[3];
BnsTables::Shared::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId() const {return 446;};
BnsTables::Shared::TableRef available_normal_matching_weekly_time;
int available_normal_matching_weekly_time_tableId() const {return 446;};
BnsTables::Shared::TableRef available_ingame_championship_matching_weekly_time;
int available_ingame_championship_matching_weekly_time_tableId() const {return 446;};
bool is_championship;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 35); }
		static __int16 TableId() { return 108; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_RecordPtr // : DrRecordPtr
	{
		duel_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}