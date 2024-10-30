/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill3_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct skill3_active_skill_Record : skill3_Record
	{
	public:
		signed char attribute[4];
__int32 attribute_Size() const {return 4;};
signed char category;
signed char flowtype;
signed char skill_type;
char Pad_sub_0[1];
BnsTables::Shared::TableRef campfire;
int campfire_tableId() const {return 47;};
BnsTables::Shared::TableRef dash_attribute;
int dash_attribute_tableId() const {return 347;};
bool sit_down;
signed char hostile_type;
char Pad_sub_1[2];
BnsTables::Shared::TableRef target_filter;
int target_filter_tableId() const {return 363;};
BnsTables::Shared::TableRef gather_range;
int gather_range_tableId() const {return 349;};
__int16 hate;
signed char toggle;
char Pad_sub_2[1];
BnsTables::Shared::TableRef switch_off_id;
int switch_off_id_tableId() const {return 337;};
BnsTables::Shared::TableRef passive_effect[8];
__int32 passive_effect_Size() const {return 8;};
int passive_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef result_controll;
int result_controll_tableId() const {return 355;};
signed char skill_result_rule;
signed char auto_skill_result;
signed char cancel_by_override_skill;
char Pad_sub_3[1];
__int32 combo_duration;
bool save_combo;
char Pad_sub_4[3];
BnsTables::Shared::TableRef children_skill[4];
__int32 children_skill_Size() const {return 4;};
int children_skill_tableId() const {return 337;};
__int16 children_skill_yaw_plus_angle[4];
__int32 children_skill_yaw_plus_angle_Size() const {return 4;};
BnsTables::Shared::TableRef cast_condition;
int cast_condition_tableId() const {return 344;};
__int32 cast_duration;
BnsTables::Shared::TableRef cast_effect[6];
__int32 cast_effect_Size() const {return 6;};
int cast_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef cast_effect_to_my_summoned_summoner[4];
__int32 cast_effect_to_my_summoned_summoner_Size() const {return 4;};
int cast_effect_to_my_summoned_summoner_tableId() const {return 115;};
bool throw_link_target;
bool casting_delay;
bool fire_miss;
bool is_condition_event_skill;
signed char global_recycle_group;
char Pad_sub_5[3];
__int32 global_recycle_group_duration;
signed char recycle_group;
signed char recycle_group_id;
char Pad_sub_6[2];
__int32 recycle_group_duration;
signed char bound_recycle_group;
signed char bound_recycle_group_id;
__int16 consume_hp_value;
signed char consume_hp_type;
char Pad_sub_7[1];
__int16 consume_sp_value[2];
__int32 consume_sp_value_Size() const {return 2;};
signed char consume_sp_type[2];
__int32 consume_sp_type_Size() const {return 2;};
__int16 consume_summoned_hp_value;
signed char consume_summoned_hp_type;
char Pad_sub_8[1];
BnsTables::Shared::TableRef target_kill_effect[4];
__int32 target_kill_effect_Size() const {return 4;};
int target_kill_effect_tableId() const {return 115;};
__int16 gain_style_score;
__int16 max_style_score;
__int32 style_duration;
bool clear_style_score;
signed char replace_target;
signed char flow_repeat;
signed char expanded_flow_repeat_count;
signed char expanded_flow_repeat_start_flow_step;
char Pad_sub_9[3];
BnsTables::Shared::TableRef cancel_flow_repeat_next_skill;
int cancel_flow_repeat_next_skill_tableId() const {return 337;};
bool occurrence_event_in_exec[5];
__int32 occurrence_event_in_exec_Size() const {return 5;};
bool occurrence_event_in_triggered;
bool occurrence_ui_skill_combo_event_in_exec[5];
__int32 occurrence_ui_skill_combo_event_in_exec_Size() const {return 5;};
char Pad_sub_10[1];
BnsTables::Shared::TableRef swing_caster_effect_1[4];
__int32 swing_caster_effect_1_Size() const {return 4;};
int swing_caster_effect_1_tableId() const {return 115;};
BnsTables::Shared::TableRef swing_caster_effect_2[4];
__int32 swing_caster_effect_2_Size() const {return 4;};
int swing_caster_effect_2_tableId() const {return 115;};
BnsTables::Shared::TableRef swing_caster_effect_3[4];
__int32 swing_caster_effect_3_Size() const {return 4;};
int swing_caster_effect_3_tableId() const {return 115;};
BnsTables::Shared::TableRef swing_caster_effect_4[4];
__int32 swing_caster_effect_4_Size() const {return 4;};
int swing_caster_effect_4_tableId() const {return 115;};
BnsTables::Shared::TableRef swing_caster_effect_5[4];
__int32 swing_caster_effect_5_Size() const {return 4;};
int swing_caster_effect_5_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_1[4];
__int32 exec_caster_effect_1_Size() const {return 4;};
int exec_caster_effect_1_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_2[4];
__int32 exec_caster_effect_2_Size() const {return 4;};
int exec_caster_effect_2_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_3[4];
__int32 exec_caster_effect_3_Size() const {return 4;};
int exec_caster_effect_3_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_4[4];
__int32 exec_caster_effect_4_Size() const {return 4;};
int exec_caster_effect_4_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_5[4];
__int32 exec_caster_effect_5_Size() const {return 4;};
int exec_caster_effect_5_tableId() const {return 115;};
BnsTables::Shared::TableRef exec_caster_effect_trigger[4];
__int32 exec_caster_effect_trigger_Size() const {return 4;};
int exec_caster_effect_trigger_tableId() const {return 115;};
signed char exec_caster_effect_skill_result_1[4];
__int32 exec_caster_effect_skill_result_1_Size() const {return 4;};
signed char exec_caster_effect_skill_result_2[4];
__int32 exec_caster_effect_skill_result_2_Size() const {return 4;};
signed char exec_caster_effect_skill_result_3[4];
__int32 exec_caster_effect_skill_result_3_Size() const {return 4;};
signed char exec_caster_effect_skill_result_4[4];
__int32 exec_caster_effect_skill_result_4_Size() const {return 4;};
signed char exec_caster_effect_skill_result_5[4];
__int32 exec_caster_effect_skill_result_5_Size() const {return 4;};
signed char exec_caster_effect_skill_result_trigger[4];
__int32 exec_caster_effect_skill_result_trigger_Size() const {return 4;};
bool stop_skill_event_on_result;
bool stop_skill_result_critical_hit;
char Pad_sub_11[2];
BnsTables::Shared::TableRef stop_next_skill_critical_hit;
int stop_next_skill_critical_hit_tableId() const {return 337;};
bool stop_skill_result_hit;
char Pad_sub_12[3];
BnsTables::Shared::TableRef stop_next_skill_hit;
int stop_next_skill_hit_tableId() const {return 337;};
bool stop_skill_result_parry;
char Pad_sub_13[3];
BnsTables::Shared::TableRef stop_next_skill_parry;
int stop_next_skill_parry_tableId() const {return 337;};
bool stop_skill_result_perfect_parry;
char Pad_sub_14[3];
BnsTables::Shared::TableRef stop_next_skill_perfect_parry;
int stop_next_skill_perfect_parry_tableId() const {return 337;};
bool stop_skill_result_counter;
char Pad_sub_15[3];
BnsTables::Shared::TableRef stop_next_skill_counter;
int stop_next_skill_counter_tableId() const {return 337;};
bool stop_skill_result_bounce;
char Pad_sub_16[3];
BnsTables::Shared::TableRef stop_next_skill_bounce;
int stop_next_skill_bounce_tableId() const {return 337;};
bool stop_skill_result_miss;
char Pad_sub_17[3];
BnsTables::Shared::TableRef stop_next_skill_miss;
int stop_next_skill_miss_tableId() const {return 337;};
bool stop_skill_result_dodge;
char Pad_sub_18[3];
BnsTables::Shared::TableRef stop_next_skill_dodge;
int stop_next_skill_dodge_tableId() const {return 337;};
signed char perfect_dodge;
char Pad_sub_19[3];
BnsTables::Shared::TableRef perfect_dodge_gather_range;
int perfect_dodge_gather_range_tableId() const {return 349;};
__int32 perfect_dodge_valid_duration[5];
__int32 perfect_dodge_valid_duration_Size() const {return 5;};
BnsTables::Shared::TableRef perfect_dodge_success_effect;
int perfect_dodge_success_effect_tableId() const {return 115;};
__int32 swing_duration_1;
__int16 fly_speed_1;
char Pad_sub_20[2];
__int32 exec_duration_1;
signed char exec_gather_type_1;
bool exec_negation_dir_gather_1;
__int16 exec_target_angle_1;
__int16 exec_target_offset_angle_1;
__int16 exec_target_offset_distance_1;
BnsTables::Shared::TableRef exec_effect_1[8];
__int32 exec_effect_1_Size() const {return 8;};
int exec_effect_1_tableId() const {return 116;};
__int16 return_speed_1;
char Pad_sub_21[2];
__int32 return_duration_1;
__int32 swing_duration_2;
__int16 fly_speed_2;
char Pad_sub_22[2];
__int32 exec_duration_2;
signed char exec_gather_type_2;
bool exec_negation_dir_gather_2;
__int16 exec_target_angle_2;
__int16 exec_target_offset_angle_2;
__int16 exec_target_offset_distance_2;
BnsTables::Shared::TableRef exec_effect_2[8];
__int32 exec_effect_2_Size() const {return 8;};
int exec_effect_2_tableId() const {return 116;};
__int16 return_speed_2;
char Pad_sub_23[2];
__int32 return_duration_2;
__int32 swing_duration_3;
__int16 fly_speed_3;
char Pad_sub_24[2];
__int32 exec_duration_3;
signed char exec_gather_type_3;
bool exec_negation_dir_gather_3;
__int16 exec_target_angle_3;
__int16 exec_target_offset_angle_3;
__int16 exec_target_offset_distance_3;
BnsTables::Shared::TableRef exec_effect_3[8];
__int32 exec_effect_3_Size() const {return 8;};
int exec_effect_3_tableId() const {return 116;};
__int16 return_speed_3;
char Pad_sub_25[2];
__int32 return_duration_3;
__int32 swing_duration_4;
__int16 fly_speed_4;
char Pad_sub_26[2];
__int32 exec_duration_4;
signed char exec_gather_type_4;
bool exec_negation_dir_gather_4;
__int16 exec_target_angle_4;
__int16 exec_target_offset_angle_4;
__int16 exec_target_offset_distance_4;
BnsTables::Shared::TableRef exec_effect_4[8];
__int32 exec_effect_4_Size() const {return 8;};
int exec_effect_4_tableId() const {return 116;};
__int16 return_speed_4;
char Pad_sub_27[2];
__int32 return_duration_4;
__int32 swing_duration_5;
__int16 fly_speed_5;
char Pad_sub_28[2];
__int32 exec_duration_5;
signed char exec_gather_type_5;
bool exec_negation_dir_gather_5;
__int16 exec_target_angle_5;
__int16 exec_target_offset_angle_5;
__int16 exec_target_offset_distance_5;
BnsTables::Shared::TableRef exec_effect_5[8];
__int32 exec_effect_5_Size() const {return 8;};
int exec_effect_5_tableId() const {return 116;};
__int16 return_speed_5;
char Pad_sub_29[2];
__int32 return_duration_5;
signed char trigger_gather_type;
bool trigger_negation_dir_gather;
char Pad_sub_30[2];
BnsTables::Shared::TableRef trigger_effect[8];
__int32 trigger_effect_Size() const {return 8;};
int trigger_effect_tableId() const {return 116;};
BnsTables::Shared::TableRef trigger_prev_skill;
int trigger_prev_skill_tableId() const {return 337;};
__int32 trigger_prev_skill_id;
BnsTables::Shared::TableRef succession_prev_skill;
int succession_prev_skill_tableId() const {return 337;};
__int32 succession_prev_skill_id;
bool apply_sealed_dungeon_skill_duration;
signed char simultaneous_group;
bool unnecessary_acquired;
signed char gather_view_index;
__int16 recommend_priority;
__int16 recommend_distance;
__int16 recommend_distance_min;
__int16 recommend_distance_max;
signed char boss_resistible_skill_type[5];
__int32 boss_resistible_skill_type_Size() const {return 5;};
char Pad_sub_31[3];
BnsTables::Shared::TableRef boss_resistible_skill_message;
int boss_resistible_skill_message_tableId() const {return 420;};
signed char boss_resistance_skill_cast;
signed char boss_resistance_skill_exec;
signed char boss_resistance_skill_finish;
char Pad_sub_32[1];
__int32 boss_resistance_skill_time_offset;
bool reset_boss_resistance_skill;
signed char resistance_skill_type;
__int16 resistance_skill_priority;
__int16 auto_combat_approach_skill;
bool auto_combat_cannot_override;
signed char auto_combat_npc_resistible_skill_type[5];
__int32 auto_combat_npc_resistible_skill_type_Size() const {return 5;};
signed char auto_combat_npc_resistance_skill_exec;
char Pad_sub_33[3];
__int32 auto_combat_npc_resistance_skill_time_offset;
signed char auto_combat_resistance_skill_type;
char Pad_sub_34[1];
__int16 auto_combat_resistance_skill_priority;
bool deactive_on_skill_fail;
char Pad_sub_35[3];
__int32 deactive_on_skill_fail_duration;
bool skip_damage_split;
char Pad_sub_36[3];
wchar_t* catch_casting_target_anim;
wchar_t* catch_attach_caster_anim;
wchar_t* catch_attach_target_anim;
wchar_t* catch_detach_caster_anim;
wchar_t* catch_detach_target_anim;
wchar_t* catch_detach_target_landing_anim;
signed char phantom_end_type;
signed char summoned_weapon_type;
bool override_skill;
signed char ground_type;
bool ui_show_force_instant_recycle;
bool ui_show_recycle;
bool ui_show_recycle_simple_context_mode;
char Pad_sub_37[1];
BnsTables::Shared::IconRef ui_recycle_icon;
BnsTables::Shared::TableRef ui_recycle_name;
int ui_recycle_name_tableId() const {return 420;};
BnsTables::Shared::TableRef ui_recycle_description;
int ui_recycle_description_tableId() const {return 420;};
__int16 ui_sp_heal_value;
signed char ui_sp_heal_type;
signed char casting_target;
signed char attach_bone_type;
char Pad_sub_38[3];
wchar_t* caster_attach_bone;
wchar_t* target_attach_bone;
signed char attach_bone_exec_step;
signed char detach_bone_exec_step;
signed char mesh_hide_exec_step;
char Pad_sub_39[1];
__int32 ui_next_combo;
signed char combo_start_point_flag;
bool summoned_attack;
bool summoned_is_recall;
bool summoned_is_target_change;
bool summoned_is_target_swoon;
char Pad_sub_40[3];
BnsTables::Shared::TableRef ui_show_effect_stack;
int ui_show_effect_stack_tableId() const {return 115;};
bool use_skill_message;
signed char override_level;
signed char override_available_level;
signed char override_group[5];
__int32 override_group_Size() const {return 5;};
__int32 override_group_bit_flags;
bool force_hit_show_play;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}