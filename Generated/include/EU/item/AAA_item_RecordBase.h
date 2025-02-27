/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class item_RecordSubType : __int32
    {
		item_record_sub_weapon = 0,
		item_record_sub_costume = 1,
		item_record_sub_grocery = 2,
		item_record_sub_gem = 3,
		item_record_sub_accessory = 4,
		item_record_sub_enchant = 5,
		item_record_sub_count = 6,
    };
#pragma pack(push, 1)
	struct item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef item_combat[10];
__int32 item_combat_Size() const {return 10;};
int item_combat_tableId() const {return 194;};
BnsTables::Shared::TableRef brand;
int brand_tableId() const {return 190;};
__int32 price;
__int32 base_fee;
signed char game_category_1;
signed char game_category_2;
__int16 game_category_3;
signed char market_category_1;
signed char market_category_2;
__int16 market_category_3;
bool cannot_dispose;
bool cannot_sell;
bool cannot_trade;
bool cannot_depot;
bool consume_durability;
bool auctionable;
bool world_boss_auctionable;
bool seal_renewal_auctionable;
bool party_auction_exclusion;
bool acquire_used;
bool equip_used;
bool account_used;
BnsTables::Shared::TableRef filter_equip[4];
__int32 filter_equip_Size() const {return 4;};
int filter_equip_tableId() const {return 147;};
BnsTables::Shared::TableRef effect_equip[4];
__int32 effect_equip_Size() const {return 4;};
int effect_equip_tableId() const {return 115;};
__int32 gear_score;
signed char equip_level;
signed char equip_level_max;
signed char equip_mastery_level;
signed char equip_job_check[5];
__int32 equip_job_check_Size() const {return 5;};
signed char equip_sex;
signed char equip_race;
signed char equip_type;
signed char equip_solo_duel_grade;
signed char equip_team_duel_grade;
signed char item_grade;
signed char legend_grade_background_particle_type;
char Pad0[1];
__int16 init_durability;
__int16 max_durability;
__int32 repair_money_cost;
signed char use_global_recycle_group;
char Pad1[3];
__int32 use_global_recycle_group_duration;
signed char use_recycle_group;
signed char use_recycle_group_id;
char Pad2[2];
__int32 use_recycle_group_duration;
bool decompose_reward_by_consume_index;
char Pad3[3];
BnsTables::Shared::TableRef decompose_reward[7];
__int32 decompose_reward_Size() const {return 7;};
int decompose_reward_tableId() const {return 331;};
signed char decompose_reward_total_count;
char Pad4[3];
BnsTables::Shared::TableRef decompose_event_reward;
int decompose_event_reward_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_blade_master;
int decompose_job_reward_blade_master_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_kung_fu_fighter;
int decompose_job_reward_kung_fu_fighter_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_force_master;
int decompose_job_reward_force_master_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_destroyer;
int decompose_job_reward_destroyer_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_summoner;
int decompose_job_reward_summoner_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_assassin;
int decompose_job_reward_assassin_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_sword_master;
int decompose_job_reward_sword_master_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_warlock;
int decompose_job_reward_warlock_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_soul_fighter;
int decompose_job_reward_soul_fighter_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_shooter;
int decompose_job_reward_shooter_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_warrior;
int decompose_job_reward_warrior_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_archer;
int decompose_job_reward_archer_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_spear_master;
int decompose_job_reward_spear_master_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_thunderer;
int decompose_job_reward_thunderer_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_dual_blader;
int decompose_job_reward_dual_blader_tableId() const {return 331;};
BnsTables::Shared::TableRef decompose_job_reward_bard;
int decompose_job_reward_bard_tableId() const {return 331;};
signed char decompose_max;
char Pad5[3];
__int32 decompose_money_cost;
BnsTables::Shared::TableRef decompose_by_item2[7];
__int32 decompose_by_item2_Size() const {return 7;};
int decompose_by_item2_tableId() const {return 197;};
__int16 decompose_by_item2_stack_count[7];
__int32 decompose_by_item2_stack_count_Size() const {return 7;};
signed char decompose_by_item2_total_count;
char Pad6[1];
BnsTables::Shared::TableRef job_decompose_by_item2[7];
__int32 job_decompose_by_item2_Size() const {return 7;};
int job_decompose_by_item2_tableId() const {return 197;};
__int16 job_decompose_by_item2_stack_count[7];
__int32 job_decompose_by_item2_stack_count_Size() const {return 7;};
signed char job_decompose_by_item2_total_count;
char Pad7[1];
BnsTables::Shared::TableRef set_item;
int set_item_tableId() const {return 339;};
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 136;};
BnsTables::Shared::TableRef equip_faction;
int equip_faction_tableId() const {return 136;};
__int16 equip_faction_level;
bool new_product;
bool hot_product;
__int16 pouch_appearance_priority;
signed char pouch_appearance;
char Pad8[1];
BnsTables::Shared::TableRef seal_consume_item[2];
__int32 seal_consume_item_Size() const {return 2;};
int seal_consume_item_tableId() const {return 197;};
__int16 seal_consume_item_count[2];
__int32 seal_consume_item_count_Size() const {return 2;};
BnsTables::Shared::TableRef seal_acquire_item;
int seal_acquire_item_tableId() const {return 197;};
bool seal_keep_level;
signed char seal_enable_count;
signed char forwarding_types[64];
__int32 forwarding_types_Size() const {return 64;};
char Pad9[2];
BnsTables::Shared::TableRef quests[64];
__int32 quests_Size() const {return 64;};
int quests_tableId() const {return 298;};
signed char missions[64];
__int32 missions_Size() const {return 64;};
signed char cases[64];
__int32 cases_Size() const {return 64;};
__int16 case_subtypes[64];
__int32 case_subtypes_Size() const {return 64;};
__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int16 defend_power_equip_value;
__int16 defend_resist_power_equip_value;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_hit_value_equip;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_pierce_value_equip;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int16 attack_critical_value;
__int16 attack_critical_value_equip;
__int16 attack_critical_damage_value;
__int16 attack_critical_damage_value_equip;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
char Pad10[2];
__int32 defend_critical_value;
__int32 defend_critical_value_equip;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_dodge_value_equip;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_value_equip;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
__int16 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
__int16 defend_damage_modify_diff;
__int32 max_hp;
__int32 max_hp_equip;
__int32 hp_regen;
__int32 hp_regen_equip;
__int32 hp_regen_combat;
__int32 hp_regen_combat_equip;
__int32 max_guard_gauge;
__int32 max_guard_gauge_equip;
__int16 attack_concentrate_value;
__int16 attack_concentrate_value_equip;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 attack_attribute_value;
__int16 attack_attribute_value_equip;
__int16 attack_attribute_base_percent;
__int16 pve_boss_level_npc_attack_power_equip_min;
__int16 pve_boss_level_npc_attack_power_equip_max;
__int16 pve_boss_level_npc_defend_power_equip_value;
__int16 pvp_attack_power_equip_min;
__int16 pvp_attack_power_equip_max;
__int16 pvp_defend_power_equip_value;
__int16 r_attack_stiff_duration_equip_value;
__int16 r_defend_stiff_duration_equip_value;
__int16 r_aoe_defend_power_value_equip;
__int16 r_heal_power_equip_value;
char Pad11[2];
__int32 r_defend_strength_equip_value;
__int32 r_attack_precise_equip_value;
__int16 r_attack_aoe_pierce_value_equip;
__int16 r_support_power_equip_value;
__int16 r_hypermove_power_equip_value;
__int16 defend_difficulty_type_damage_reduce_percent;
__int16 race_type_1_attack_damage_modify_percent;
__int16 race_type_2_attack_damage_modify_percent;
__int16 race_type_3_attack_damage_modify_percent;
__int16 race_type_4_attack_damage_modify_percent;
__int16 race_type_5_attack_damage_modify_percent;
__int16 race_type_6_attack_damage_modify_percent;
__int16 race_type_7_attack_damage_modify_percent;
__int16 race_type_1_defend_damage_modify_percent;
__int16 race_type_2_defend_damage_modify_percent;
__int16 race_type_3_defend_damage_modify_percent;
__int16 race_type_4_defend_damage_modify_percent;
__int16 race_type_5_defend_damage_modify_percent;
__int16 race_type_6_defend_damage_modify_percent;
__int16 race_type_7_defend_damage_modify_percent;
__int16 attribute_type_1_attack_damage_modify_percent;
__int16 attribute_type_2_attack_damage_modify_percent;
__int16 attribute_type_3_attack_damage_modify_percent;
__int16 attribute_type_4_attack_damage_modify_percent;
__int16 attribute_type_5_attack_damage_modify_percent;
__int16 attribute_type_6_attack_damage_modify_percent;
__int16 attribute_type_7_attack_damage_modify_percent;
__int16 attribute_type_8_attack_damage_modify_percent;
__int16 attribute_type_9_attack_damage_modify_percent;
__int16 attribute_type_10_attack_damage_modify_percent;
__int16 attribute_type_11_attack_damage_modify_percent;
__int16 attribute_type_12_attack_damage_modify_percent;
__int16 attribute_type_1_defend_damage_modify_percent;
__int16 attribute_type_2_defend_damage_modify_percent;
__int16 attribute_type_3_defend_damage_modify_percent;
__int16 attribute_type_4_defend_damage_modify_percent;
__int16 attribute_type_5_defend_damage_modify_percent;
__int16 attribute_type_6_defend_damage_modify_percent;
__int16 attribute_type_7_defend_damage_modify_percent;
__int16 attribute_type_8_defend_damage_modify_percent;
__int16 attribute_type_9_defend_damage_modify_percent;
__int16 attribute_type_10_defend_damage_modify_percent;
__int16 attribute_type_11_defend_damage_modify_percent;
__int16 attribute_type_12_defend_damage_modify_percent;
__int16 defend_critical_damage_value;
__int16 defend_critical_damage_value_equip;
__int32 job_ability_1;
__int16 job_ability_2;
__int16 heal_power_base_percent;
__int16 heal_power_value;
char Pad12[2];
__int32 heal_power_diff;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_attack_power_value;
__int16 abnormal_attack_power_value_equip;
__int16 abnormal_defend_base_percent;
__int16 abnormal_defend_power_value;
__int16 hate_power_equip_value;
__int16 additional_exp_diff_by_kill;
__int16 additional_exp_percent_by_kill;
__int32 attack_abnormal_hit_equip_value;
__int32 defend_abnormal_resistance_equip_value;
__int16 potential_attack_power_equip_min;
__int16 potential_attack_power_equip_max;
__int16 potential_defend_power_equip_value;
__int16 potential_defend_resist_power_equip_value;
__int16 potential_attack_hit_base_percent;
__int16 potential_attack_hit_value;
__int16 potential_attack_pierce_value;
__int16 potential_attack_critical_base_percent;
__int16 potential_attack_critical_damage_percent;
__int16 potential_attack_critical_value;
__int16 potential_defend_critical_base_percent;
__int16 potential_defend_critical_value;
__int16 potential_defend_dodge_base_percent;
__int16 potential_defend_dodge_value;
__int16 potential_defend_parry_base_percent;
__int16 potential_defend_parry_value;
__int16 potential_attack_stiff_duration_base_percent;
__int16 potential_attack_stiff_duration_value;
__int16 potential_defend_stiff_duration_base_percent;
__int16 potential_defend_stiff_duration_value;
__int16 potential_cast_duration_base_percent;
__int16 potential_cast_duration_value;
__int16 potential_defend_physical_damage_reduce_percent;
__int16 potential_defend_force_damage_reduce_percent;
__int16 potential_attack_damage_modify_percent;
__int16 potential_attack_damage_modify_diff;
__int16 potential_defend_damage_modify_percent;
__int16 potential_defend_damage_modify_diff;
__int16 potential_attack_concentrate_value;
__int16 potential_defend_perfect_parry_reduce_percent;
__int16 potential_defend_counter_reduce_percent;
char Pad13[2];
__int32 potential_max_hp;
__int32 potential_hp_regen;
__int32 potential_hp_regen_combat;
__int32 potential_max_guard_gauge;
__int16 potential_pve_boss_level_npc_attack_power_equip_min;
__int16 potential_pve_boss_level_npc_attack_power_equip_max;
__int16 potential_pve_boss_level_npc_defend_power_equip_value;
__int16 potential_pvp_attack_power_equip_min;
__int16 potential_pvp_attack_power_equip_max;
__int16 potential_pvp_defend_power_equip_value;
__int16 potential_attack_attribute_value_equip;
__int16 potential_abnormal_attack_power_value_equip;
__int16 potential_abnormal_defend_power_value;
__int16 potential_heal_power_value;
__int16 potential_attack_critical_damage_value_equip;
char Pad14[2];
wchar_t* item_sound_move;
wchar_t* item_sound_dragstart;
wchar_t* item_sound_itemdrop;
signed char main_ability[2];
__int32 main_ability_Size() const {return 2;};
bool pccafe_ncsoft_korea_only;
char Pad15[1];
__int32 growth_id;
signed char growth_level_max;
signed char growth_step;
signed char growth_efficient_level;
char Pad16[1];
__int16 growth_exp_scale;
char Pad17[2];
__int32 random_option_group_id;
__int32 has_random_option_group_data_flag;
__int32 growth_recipe_exp_min;
__int32 growth_recipe_exp_max;
__int32 growth_recipe_exp[4];
__int32 growth_recipe_exp_Size() const {return 4;};
__int32 growth_recipe_cost;
BnsTables::Shared::TableRef growth_recipe_material[6];
__int32 growth_recipe_material_Size() const {return 6;};
int growth_recipe_material_tableId() const {return 197;};
__int16 growth_recipe_material_count[6];
__int32 growth_recipe_material_count_Size() const {return 6;};
signed char growth_fail_probability;
char Pad18[3];
__int32 awakening_recipe_cost;
BnsTables::Shared::TableRef awakening_recipe_material[6];
__int32 awakening_recipe_material_Size() const {return 6;};
int awakening_recipe_material_tableId() const {return 197;};
__int16 awakening_recipe_material_count[6];
__int32 awakening_recipe_material_count_Size() const {return 6;};
bool dispose_awakening_feed_item;
bool dispose_awakening_material;
char Pad19[2];
BnsTables::Shared::TableRef required_feed_item_brand_for_growth;
int required_feed_item_brand_for_growth_tableId() const {return 190;};
BnsTables::Shared::TableRef required_feed_item_for_growth;
int required_feed_item_for_growth_tableId() const {return 197;};
signed char required_seed_item_growth_course;
signed char required_seed_item_condition_type;
signed char required_seed_item_equip_level_min;
signed char required_seed_item_equip_level_max;
BnsTables::Shared::TableRef required_feed_item_brand_for_awakening;
int required_feed_item_brand_for_awakening_tableId() const {return 190;};
signed char required_feed_item_condition_type;
signed char required_feed_item_level_min;
char Pad20[2];
BnsTables::Shared::TableRef awakening_target_item[5];
__int32 awakening_target_item_Size() const {return 5;};
int awakening_target_item_tableId() const {return 197;};
__int16 required_awakening_bm_item_count;
signed char awakening_probability;
char Pad21[1];
BnsTables::Shared::TableRef awakening_fail_effect;
int awakening_fail_effect_tableId() const {return 115;};
bool lock_enable;
signed char time_limit_type;
char Pad22[2];
__int32 usable_duration;
__int64 fixed_expiration_time;
signed char delete_expiration_type;
char Pad23[3];
BnsTables::Shared::TableRef event_info;
int event_info_tableId() const {return 198;};
bool show_reward_preview;
char Pad24[3];
BnsTables::Shared::TableRef account_post_charge;
int account_post_charge_tableId() const {return 5;};
signed char fusion_category_1;
char Pad25[1];
__int16 fusion_category_2;
__int32 fusion_score;
signed char boast_event_type;
char Pad26[3];
__int32 improve_id;
signed char improve_level;
char Pad27[3];
BnsTables::Shared::TableRef improve_next_item;
int improve_next_item_tableId() const {return 197;};
BnsTables::Shared::TableRef improve_prev_item;
int improve_prev_item_tableId() const {return 197;};
BnsTables::Shared::TableRef job_change_item_exchange_group;
int job_change_item_exchange_group_tableId() const {return 228;};
BnsTables::Shared::TableRef manipulate_zone_env2_list[10];
__int32 manipulate_zone_env2_list_Size() const {return 10;};
int manipulate_zone_env2_list_tableId() const {return 470;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 426;};
BnsTables::Shared::TableRef nickname;
int nickname_tableId() const {return 426;};
signed char stage_number;
char Pad28[3];
BnsTables::Shared::IconRef tag_icon;
BnsTables::Shared::IconRef tag_icon_grade;
BnsTables::Shared::IconRef icon;
wchar_t* kun_mesh;
wchar_t* gon_male_mesh;
wchar_t* gon_female_mesh;
wchar_t* lyn_male_mesh;
wchar_t* lyn_female_mesh;
wchar_t* jin_male_mesh;
wchar_t* jin_female_mesh;
wchar_t* cat_mesh;
wchar_t* kun_mesh_col[3];
__int32 kun_mesh_col_Size() const {return 3;};
wchar_t* gon_male_mesh_col[3];
__int32 gon_male_mesh_col_Size() const {return 3;};
wchar_t* gon_female_mesh_col[3];
__int32 gon_female_mesh_col_Size() const {return 3;};
wchar_t* lyn_male_mesh_col[3];
__int32 lyn_male_mesh_col_Size() const {return 3;};
wchar_t* lyn_female_mesh_col[3];
__int32 lyn_female_mesh_col_Size() const {return 3;};
wchar_t* jin_male_mesh_col[3];
__int32 jin_male_mesh_col_Size() const {return 3;};
wchar_t* jin_female_mesh_col[3];
__int32 jin_female_mesh_col_Size() const {return 3;};
wchar_t* cat_mesh_col[3];
__int32 cat_mesh_col_Size() const {return 3;};
wchar_t* mesh_id;
wchar_t* mesh_id_2;
wchar_t* talk_mesh;
wchar_t* talk_animset;
wchar_t* mesh_col[3];
__int32 mesh_col_Size() const {return 3;};
wchar_t* mesh_animset;
wchar_t* mesh_animtree;
bool mesh_attach;
bool hide_beard;
bool hide_name;
bool guild_item;
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 426;};
BnsTables::Shared::TableRef description4_title;
int description4_title_tableId() const {return 426;};
BnsTables::Shared::TableRef description5_title;
int description5_title_tableId() const {return 426;};
BnsTables::Shared::TableRef description6_title;
int description6_title_tableId() const {return 426;};
BnsTables::Shared::TableRef description4;
int description4_tableId() const {return 426;};
BnsTables::Shared::TableRef description5;
int description5_tableId() const {return 426;};
BnsTables::Shared::TableRef description6;
int description6_tableId() const {return 426;};
BnsTables::Shared::TableRef description7;
int description7_tableId() const {return 426;};
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 426;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 426;};
BnsTables::Shared::TableRef identify_main_info;
int identify_main_info_tableId() const {return 426;};
BnsTables::Shared::TableRef identify_sub_info;
int identify_sub_info_tableId() const {return 426;};
BnsTables::Shared::TableRef identify_description;
int identify_description_tableId() const {return 426;};
BnsTables::Shared::TableRef legend_transform_title_name;
int legend_transform_title_name_tableId() const {return 426;};
signed char ui_icon_state;
char Pad29[3];
BnsTables::Shared::TableRef message[9];
__int32 message_Size() const {return 9;};
int message_tableId() const {return 274;};
bool invoke_fx_msg;
char Pad30[3];
wchar_t* tooltip_info;
__int32 item_score;
signed char item_style;
char Pad31[1];
__int16 release_contents_group;
BnsTables::Shared::TableRef randomoption_reset_cost_group;
int randomoption_reset_cost_group_tableId() const {return 77;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(58, 0); }
		static __int16 TableId() { return 197; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_RecordPtr // : DrRecordPtr
	{
		item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}