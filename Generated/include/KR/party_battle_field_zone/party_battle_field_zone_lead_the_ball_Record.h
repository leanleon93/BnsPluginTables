/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct party_battle_field_zone_lead_the_ball_Record : party_battle_field_zone_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef arrow_control_point[6];
__int32 arrow_control_point_Size() const {return 6;};
int arrow_control_point_tableId() const {return 473;};
BnsTables::Shared::TableRef opening_tip_off_control_point;
int opening_tip_off_control_point_tableId() const {return 473;};
BnsTables::Shared::TableRef alpha_goal_post;
int alpha_goal_post_tableId() const {return 473;};
BnsTables::Shared::TableRef beta_goal_post;
int beta_goal_post_tableId() const {return 473;};
__int16 goal_post_enable_delay_second;
signed char ball_spawn_max_count;
char Pad_sub_1[1];
__int16 init_ball_spawn_delay_second;
char Pad_sub_2[2];
BnsTables::Shared::TableRef ball_npc_id;
int ball_npc_id_tableId() const {return 270;};
__int16 play_section_duration_second[2];
__int32 play_section_duration_second_Size() const {return 2;};
__int16 ball_spawn_interval_second[3];
__int32 ball_spawn_interval_second_Size() const {return 3;};
char Pad_sub_3[2];
BnsTables::Shared::TableRef ball_speed_effect[3];
__int32 ball_speed_effect_Size() const {return 3;};
int ball_speed_effect_tableId() const {return 115;};
__int16 goal_in_score[3];
__int32 goal_in_score_Size() const {return 3;};
__int16 consecutive_goal_bonus[3];
__int32 consecutive_goal_bonus_Size() const {return 3;};
__int16 consecutive_goal_bonus_duration_second;
char Pad_sub_4[2];
BnsTables::Shared::TableRef goal_in_effect[2];
__int32 goal_in_effect_Size() const {return 2;};
int goal_in_effect_tableId() const {return 115;};
wchar_t* friend_goal_in_kismet_name;
wchar_t* enemy_goal_in_kismet_name;
wchar_t* friend_alpha_goal_post_kismet_name;
wchar_t* friend_beta_goal_post_kismet_name;
wchar_t* enemy_alpha_goal_post_kismet_name;
wchar_t* enemy_beta_goal_post_kismet_name;
wchar_t* friend_alpha_goal_post_goal_in_kismet_name;
wchar_t* friend_beta_goal_post_goal_in_kismet_name;
wchar_t* enemy_alpha_goal_post_goal_in_kismet_name;
wchar_t* enemy_beta_goal_post_goal_in_kismet_name;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}