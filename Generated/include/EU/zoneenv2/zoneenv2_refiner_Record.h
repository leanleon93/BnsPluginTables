/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_refiner_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
__int32 occupation_duration;
__int32 try_refining_duration;
__int32 base_refining_duration;
__int32 accroach_duration;
__int32 give_faction_score_duration;
__int32 respawn_duration_in_refined;
__int32 refine_faction_score;
BnsTables::Shared::TableRef refined_reward_item;
int refined_reward_item_tableId() const {return 195;};
__int16 refined_reward_item_base_count;
char Pad_sub_1[2];
BnsTables::Shared::TableRef refined_effect;
int refined_effect_tableId() const {return 115;};
__int16 refined_effect_distance;
bool refining_disable;
char Pad_sub_2[1];
BnsTables::Shared::TableRef occputation_effect;
int occputation_effect_tableId() const {return 115;};
__int16 occputation_effect_distance;
char Pad_sub_3[2];
BnsTables::Shared::IconRef occupy_action_icon;
BnsTables::Shared::TableRef occupy_action_name;
int occupy_action_name_tableId() const {return 420;};
wchar_t* occupy_caster_showname;
BnsTables::Shared::IconRef try_refine_action_icon;
BnsTables::Shared::TableRef try_refine_action_name;
int try_refine_action_name_tableId() const {return 420;};
wchar_t* try_refine_caster_showname;
BnsTables::Shared::IconRef give_score_action_icon;
BnsTables::Shared::TableRef give_score_action_name;
int give_score_action_name_tableId() const {return 420;};
BnsTables::Shared::TableRef give_score_social;
int give_score_social_tableId() const {return 382;};
wchar_t* give_score_caster_showname;
BnsTables::Shared::IconRef accroach_action_icon;
BnsTables::Shared::TableRef accroach_action_name;
int accroach_action_name_tableId() const {return 420;};
wchar_t* accroach_caster_showname;
wchar_t* accroach_start_kismet;
wchar_t* accroach_end_kismet;
wchar_t* friend_gate_start_kismet;
wchar_t* friend_gate_end_kismet;
wchar_t* enemy_gate_start_kismet;
wchar_t* enemy_gate_end_kismet;
signed char refiner_ui_index;

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}