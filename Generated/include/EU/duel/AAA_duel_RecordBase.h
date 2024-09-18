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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
__int8 duel_type;
__int8 max_round_count;
__int8 round_win_count;
__int8 round_count;
__int32 round_start_countdown_duration;
__int32 round_preparation_duration;
__int32 round_duration;
__int32 round_restart_duration;
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 443;};
BnsTables::Shared::TableRef arena_outside_alpha_side_pc_spawn[3];
int arena_outside_alpha_side_pc_spawn_tableId(){return 452;};
BnsTables::Shared::TableRef arena_outside_beta_side_pc_spawn[3];
int arena_outside_beta_side_pc_spawn_tableId(){return 452;};
BnsTables::Shared::TableRef effect;
int effect_tableId(){return 111;};
bool is_unrated_match;
char Pad0[3];
BnsTables::Shared::TableRef loading_description_1;
int loading_description_1_tableId(){return 405;};
BnsTables::Shared::TableRef loading_description_2;
int loading_description_2_tableId(){return 405;};
BnsTables::Shared::IconRef loading_icon;
BnsTables::Shared::TableRef boast;
int boast_tableId(){return 42;};
BnsTables::Shared::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad1[3];
BnsTables::Shared::TableRef duel_name2;
int duel_name2_tableId(){return 405;};
BnsTables::Shared::TableRef duel_desc;
int duel_desc_tableId(){return 405;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
BnsTables::Shared::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 bonus_point_percent[2];
__int32 bonus_exp_percent[2];
__int8 camera_world_pos_index;
char Pad2[3];
BnsTables::Shared::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId(){return 431;};
BnsTables::Shared::TableRef available_normal_matching_weekly_time;
int available_normal_matching_weekly_time_tableId(){return 431;};
BnsTables::Shared::TableRef available_ingame_championship_matching_weekly_time;
int available_ingame_championship_matching_weekly_time_tableId(){return 431;};
bool is_championship;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 35); }
		static __int16 TableId() { return 107; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_RecordPtr // : DrRecordPtr
	{
		duel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}