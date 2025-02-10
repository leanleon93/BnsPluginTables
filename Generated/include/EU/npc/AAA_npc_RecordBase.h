/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct npc_Record : BnsTables::Shared::DrEl
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
wchar_t* name;
wchar_t* title;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 420;};
BnsTables::Shared::TableRef title2;
int title2_tableId() const {return 420;};
BnsTables::Shared::TableRef boss_npc;
int boss_npc_tableId() const {return 46;};
bool soul_npc;
signed char boss_type;
bool write_combat_log;
char Pad0[1];
__int16 radius;
__int16 scale;
__int16 walk_speed;
__int16 run_speed;
signed char neutral_hostile;
bool offensive;
signed char immune_skill_attribute[8];
__int32 immune_skill_attribute_Size() const {return 8;};
__int16 immune_effect_attribute[20];
__int32 immune_effect_attribute_Size() const {return 20;};
__int16 immune_breaker_attribute[8];
__int32 immune_breaker_attribute_Size() const {return 8;};
signed char immune_breaker_count;
char Pad1[1];
__int32 immune_breaker_init_duration;
wchar_t* immune_breaker_show[8];
__int32 immune_breaker_show_Size() const {return 8;};
BnsTables::Shared::TableRef store;
int store_tableId() const {return 400;};
BnsTables::Shared::TableRef store_by_item;
int store_by_item_tableId() const {return 399;};
BnsTables::Shared::TableRef store2[6];
__int32 store2_Size() const {return 6;};
int store2_tableId() const {return 398;};
BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 416;};
bool repairer;
signed char production;
bool market;
bool post_office;
bool exchange_faction_score;
char Pad2[1];
__int16 exchange_faction_score_max_faction_level;
signed char exchange_faction_score_multiply_value;
bool join_leave_faction;
bool transfer_faction;
bool depot;
bool guild;
char Pad3[3];
__int32 max_faction_score;
bool enable_co_ownership_pouch;
char Pad4[3];
__int32 reward_faction_score;
signed char peaktime_reward_sun_start_hour;
signed char peaktime_reward_sun_end_hour;
signed char peaktime_reward_mon_start_hour;
signed char peaktime_reward_mon_end_hour;
signed char peaktime_reward_tue_start_hour;
signed char peaktime_reward_tue_end_hour;
signed char peaktime_reward_wed_start_hour;
signed char peaktime_reward_wed_end_hour;
signed char peaktime_reward_thu_start_hour;
signed char peaktime_reward_thu_end_hour;
signed char peaktime_reward_fri_start_hour;
signed char peaktime_reward_fri_end_hour;
signed char peaktime_reward_sat_start_hour;
signed char peaktime_reward_sat_end_hour;
char Pad5[2];
BnsTables::Shared::TableRef contribution_reward;
int contribution_reward_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_sun;
int contribution_day_reward_sun_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_mon;
int contribution_day_reward_mon_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_tue;
int contribution_day_reward_tue_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_wed;
int contribution_day_reward_wed_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_thu;
int contribution_day_reward_thu_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_fri;
int contribution_day_reward_fri_tableId() const {return 76;};
BnsTables::Shared::TableRef contribution_day_reward_sat;
int contribution_day_reward_sat_tableId() const {return 76;};
signed char contribution_peaktime_reward_sun_start_hour;
signed char contribution_peaktime_reward_sun_end_hour;
signed char contribution_peaktime_reward_mon_start_hour;
signed char contribution_peaktime_reward_mon_end_hour;
signed char contribution_peaktime_reward_tue_start_hour;
signed char contribution_peaktime_reward_tue_end_hour;
signed char contribution_peaktime_reward_wed_start_hour;
signed char contribution_peaktime_reward_wed_end_hour;
signed char contribution_peaktime_reward_thu_start_hour;
signed char contribution_peaktime_reward_thu_end_hour;
signed char contribution_peaktime_reward_fri_start_hour;
signed char contribution_peaktime_reward_fri_end_hour;
signed char contribution_peaktime_reward_sat_start_hour;
signed char contribution_peaktime_reward_sat_end_hour;
char Pad6[2];
BnsTables::Shared::TableRef personal_dropped_pouch_reward;
int personal_dropped_pouch_reward_tableId() const {return 326;};
BnsTables::Shared::TableRef personal_dropped_pouch_reward_difficulty_type[3];
__int32 personal_dropped_pouch_reward_difficulty_type_Size() const {return 3;};
int personal_dropped_pouch_reward_difficulty_type_tableId() const {return 326;};
BnsTables::Shared::TableRef reward_sealed_dungeon;
int reward_sealed_dungeon_tableId() const {return 269;};
BnsTables::Shared::TableRef fielditemdrop;
int fielditemdrop_tableId() const {return 143;};
BnsTables::Shared::TableRef deadbody_fielditemdrop;
int deadbody_fielditemdrop_tableId() const {return 143;};
__int32 deadbody_pickup_duration;
bool burrow;
char Pad7[3];
__int32 manipulate_duration;
wchar_t* caster_manipulate_animname;
wchar_t* target_manipulate_animname;
wchar_t* caster_manipulate_show;
wchar_t* target_manipulate_show;
BnsTables::Shared::TableRef action_name;
int action_name_tableId() const {return 420;};
BnsTables::Shared::TableRef action_desc;
int action_desc_tableId() const {return 420;};
BnsTables::Shared::TableRef manipulate_transit_zone;
int manipulate_transit_zone_tableId() const {return 461;};
signed char forwarding_types[120];
__int32 forwarding_types_Size() const {return 120;};
BnsTables::Shared::TableRef quests[120];
__int32 quests_Size() const {return 120;};
int quests_tableId() const {return 294;};
signed char missions[120];
__int32 missions_Size() const {return 120;};
signed char cases[120];
__int32 cases_Size() const {return 120;};
__int16 case_subtypes[120];
__int32 case_subtypes_Size() const {return 120;};
signed char loot_forwarding_types[8];
__int32 loot_forwarding_types_Size() const {return 8;};
BnsTables::Shared::TableRef loot_quests[8];
__int32 loot_quests_Size() const {return 8;};
int loot_quests_tableId() const {return 294;};
signed char loot_missions[8];
__int32 loot_missions_Size() const {return 8;};
signed char loot_cases[8];
__int32 loot_cases_Size() const {return 8;};
BnsTables::Shared::TableRef loot_item[8];
__int32 loot_item_Size() const {return 8;};
int loot_item_tableId() const {return 195;};
signed char finish_blow_forwarding_types[21];
__int32 finish_blow_forwarding_types_Size() const {return 21;};
char Pad8[3];
BnsTables::Shared::TableRef finish_blow_quests[21];
__int32 finish_blow_quests_Size() const {return 21;};
int finish_blow_quests_tableId() const {return 294;};
signed char finish_blow_missions[21];
__int32 finish_blow_missions_Size() const {return 21;};
signed char finish_blow_cases[21];
__int32 finish_blow_cases_Size() const {return 21;};
char Pad9[2];
float walk_ratescale;
float run_ratescale;
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 85;};
wchar_t* animset;
wchar_t* face_animset;
bool talk;
signed char iconindex;
char Pad10[2];
float mesh_scale;
signed char p_radius;
char Pad11[1];
__int16 name_pos_diff;
__int16 name_pos_stand;
__int16 name_pos_sit;
__int16 name_pos_dead;
char Pad12[2];
wchar_t* start_talk_action;
wchar_t* end_talk_action;
wchar_t* spawn_production;
wchar_t* dead_production;
bool four_leg;
char Pad13[3];
wchar_t* despawn_showdata;
signed char race;
signed char sex;
signed char job;
signed char stance;
signed char level;
signed char mastery_level;
char Pad14[2];
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 135;};
bool attackable;
bool detect_hiding;
char Pad15[2];
BnsTables::Shared::TableRef default_idle;
int default_idle_tableId() const {return 267;};
bool warfare_boss;
char Pad16[3];
__int64 max_hp;
__int16 max_sp;
__int16 modify_cast_speed_percent;
__int64 hp_regen;
__int32 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
__int32 defend_critical_value;
__int16 defend_bounce_percent;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_reduce_percent;
__int16 defend_parry_reduce_diff;
__int16 defend_perfect_parry_base_percent;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 defend_immune_base_percent;
char Pad17[2];
__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int32 defend_power_creature_value;
__int32 defend_power_equip_value;
__int16 defend_resist_power_creature_value;
__int16 defend_resist_power_equip_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
char Pad18[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad19[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad20[2];
__int32 job_ability_1;
__int32 job_ability_2;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 hate_base_percent;
__int16 hate_power_creature_value;
char Pad21[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
__int16 abnormal_attack_power_modify;
__int16 abnormal_defend_power_modify;
__int16 hate_power_modify;
__int16 heal_power_modify;
__int16 aoe_defend_power_modify;
__int16 attack_hit_value_modify;
__int16 attack_critical_value_modify;
__int16 defend_critical_value_modify;
__int16 defend_dodge_value_modify;
__int16 defend_parry_value_modify;
__int16 defend_physical_value_modify;
__int16 defend_force_value_modify;
__int16 attack_stiff_duration_value_modify;
__int16 defend_stiff_duration_value_modify;
__int16 cast_duration_value_modify;
__int16 attack_critical_damage_modify;
__int16 defend_critical_damage_modify;
__int16 attack_pierce_modify;
__int16 attack_parry_pierce_modify;
__int16 defend_parry_reduce_modify;
__int16 attack_perfect_parry_damage_modify;
__int16 defend_perfect_parry_reduce_modify;
__int16 attack_counter_damage_modify;
__int16 defend_counter_reduce_modify;
signed char grade2;
char Pad22[1];
wchar_t* grade_imageset;
BnsTables::Shared::TableRef grade_tooltip_text;
int grade_tooltip_text_tableId() const {return 420;};
signed char boss_ui_type;
signed char boss_group_id;
signed char boss_slot;
bool boss_kill_hide_slot;
BnsTables::Shared::TableRef boss_spawn_message;
int boss_spawn_message_tableId() const {return 155;};
BnsTables::Shared::IconRef boss_icon;
BnsTables::Shared::IconRef boss_aggro_icon;
wchar_t* boss_aggro_indicator;
wchar_t* boss_aggro_twin_indicator;
wchar_t* end_talk_sound;
BnsTables::Shared::TableRef end_talk_social;
int end_talk_social_tableId() const {return 382;};
wchar_t* burrow_scaned_mark;
wchar_t* burrow_visual_effect;
bool use_foot_print;
bool use_water_print;
bool default_visible;
signed char move_type;
signed char size_type;
char Pad23[3];
wchar_t* description;
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 420;};
BnsTables::Shared::TableRef dying_message;
int dying_message_tableId() const {return 420;};
signed char role_type;
char Pad24[3];
BnsTables::Shared::TableRef die_shout;
int die_shout_tableId() const {return 420;};
signed char race_type;
char Pad25[3];
BnsTables::Shared::TableRef indicator;
int indicator_tableId() const {return 185;};
bool neutral_faction_nameplate_enemy;
char Pad26[3];
BnsTables::Shared::TableRef banned_response[2];
__int32 banned_response_Size() const {return 2;};
int banned_response_tableId() const {return 268;};
BnsTables::Shared::TableRef response[7];
__int32 response_Size() const {return 7;};
int response_tableId() const {return 268;};
BnsTables::Shared::TableRef stand_social[3];
__int32 stand_social_Size() const {return 3;};
int stand_social_tableId() const {return 382;};
__int16 stand_social_rate[3];
__int32 stand_social_rate_Size() const {return 3;};
bool die_knockback;
bool invoke_fx_msg;
bool disable_name_spawn;
bool play_additional_die;
char Pad27[2];
BnsTables::Shared::TableRef summoned_beauty_shop;
int summoned_beauty_shop_tableId() const {return 402;};
BnsTables::Shared::TableRef boast;
int boast_tableId() const {return 42;};
bool always_show_hp;
bool use_map_unit_group;
char Pad28[2];
BnsTables::Shared::TableRef map_unit[2];
__int32 map_unit_Size() const {return 2;};
int map_unit_tableId() const {return 249;};
bool use_immediate_load;
signed char ghost_type;
char Pad29[2];
wchar_t* ghostmode_beyond_start_show;
wchar_t* ghostmode_beyond_end_show;
signed char soul_npc_skill_level;
char Pad30[1];
__int16 boss_challenge_attraction_score;
bool is_mysterious_store;
char Pad31[3];
BnsTables::Shared::TableRef newbiecare;
int newbiecare_tableId() const {return 263;};
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
__int16 attack_attribute_modify;
bool hide_nameplate;
char Pad32[1];
__int16 nameplate_height_modify;
__int16 attack_aoe_pierce_value;
__int16 attack_abnormal_hit_base_percent;
__int16 attack_abnormal_hit_value;
__int16 defend_abnormal_dodge_base_percent;
__int16 defend_abnormal_dodge_value;
__int16 support_power_base_percent;
__int16 support_power_value;
char Pad33[2];
__int32 heal_power_value;
__int16 hypermove_power_value;
__int16 r_attack_aoe_pierce_modify;
__int16 r_attack_abnormal_hit_modify;
__int16 r_defend_abnormal_dodge_modify;
__int16 r_support_power_modify;
bool job_change_enter_zone;
bool job_change;
signed char race_type2;
signed char attribute_type;
char Pad34[2];
__int32 fatigability_consume_amount;
__int16 release_contents_group;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 265; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npc_RecordPtr // : DrRecordPtr
	{
		npc_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}