/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
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
int item_combat_tableId() const {return 199;};
BnsTables::Shared::TableRef brand;
int brand_tableId() const {return 195;};
__int32 price;
__int32 price_neo_gold;
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
bool seal_renewal_auctionable;
bool party_auction_exclusion;
bool acquire_used;
bool equip_used;
bool account_used;
char Pad0[1];
BnsTables::Shared::TableRef filter_equip[4];
__int32 filter_equip_Size() const {return 4;};
int filter_equip_tableId() const {return 150;};
BnsTables::Shared::TableRef effect_equip[4];
__int32 effect_equip_Size() const {return 4;};
int effect_equip_tableId() const {return 118;};
__int32 gear_score;
signed char equip_level;
signed char equip_level_max;
signed char equip_mastery_level;
signed char equip_job_check[5];
__int32 equip_job_check_Size() const {return 5;};
signed char equip_sex;
signed char equip_race;
signed char job_specialization[3];
__int32 job_specialization_Size() const {return 3;};
signed char equip_type;
signed char equip_solo_duel_grade;
signed char equip_team_duel_grade;
signed char item_grade;
signed char legend_grade_background_particle_type;
__int16 init_durability;
__int16 max_durability;
char Pad1[2];
__int32 repair_money_cost;
signed char use_global_recycle_group;
char Pad2[3];
__int32 use_global_recycle_group_duration;
signed char use_recycle_group;
signed char use_recycle_group_id;
char Pad3[2];
__int32 use_recycle_group_duration;
bool decompose_reward_by_consume_index;
char Pad4[3];
BnsTables::Shared::TableRef decompose_reward[7];
__int32 decompose_reward_Size() const {return 7;};
int decompose_reward_tableId() const {return 340;};
signed char decompose_reward_total_count;
char Pad5[3];
BnsTables::Shared::TableRef decompose_event_reward;
int decompose_event_reward_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_blade_master;
int decompose_job_reward_blade_master_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_kung_fu_fighter;
int decompose_job_reward_kung_fu_fighter_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_force_master;
int decompose_job_reward_force_master_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_destroyer;
int decompose_job_reward_destroyer_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_summoner;
int decompose_job_reward_summoner_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_assassin;
int decompose_job_reward_assassin_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_sword_master;
int decompose_job_reward_sword_master_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_warlock;
int decompose_job_reward_warlock_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_soul_fighter;
int decompose_job_reward_soul_fighter_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_shooter;
int decompose_job_reward_shooter_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_warrior;
int decompose_job_reward_warrior_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_archer;
int decompose_job_reward_archer_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_spear_master;
int decompose_job_reward_spear_master_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_thunderer;
int decompose_job_reward_thunderer_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_dual_blader;
int decompose_job_reward_dual_blader_tableId() const {return 340;};
BnsTables::Shared::TableRef decompose_job_reward_bard;
int decompose_job_reward_bard_tableId() const {return 340;};
signed char decompose_max;
char Pad6[3];
__int32 decompose_money_cost;
BnsTables::Shared::TableRef decompose_by_item2[7];
__int32 decompose_by_item2_Size() const {return 7;};
int decompose_by_item2_tableId() const {return 202;};
__int16 decompose_by_item2_stack_count[7];
__int32 decompose_by_item2_stack_count_Size() const {return 7;};
signed char decompose_by_item2_total_count;
char Pad7[1];
BnsTables::Shared::TableRef job_decompose_by_item2[7];
__int32 job_decompose_by_item2_Size() const {return 7;};
int job_decompose_by_item2_tableId() const {return 202;};
__int16 job_decompose_by_item2_stack_count[7];
__int32 job_decompose_by_item2_stack_count_Size() const {return 7;};
signed char job_decompose_by_item2_total_count;
char Pad8[1];
BnsTables::Shared::TableRef set_item;
int set_item_tableId() const {return 348;};
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 139;};
BnsTables::Shared::TableRef equip_faction;
int equip_faction_tableId() const {return 139;};
__int16 equip_faction_level;
bool new_product;
bool hot_product;
__int16 pouch_appearance_priority;
signed char pouch_appearance;
char Pad9[1];
BnsTables::Shared::TableRef seal_consume_item[2];
__int32 seal_consume_item_Size() const {return 2;};
int seal_consume_item_tableId() const {return 202;};
__int16 seal_consume_item_count[2];
__int32 seal_consume_item_count_Size() const {return 2;};
BnsTables::Shared::TableRef seal_acquire_item;
int seal_acquire_item_tableId() const {return 202;};
bool seal_keep_level;
signed char seal_enable_count;
signed char forwarding_types[64];
__int32 forwarding_types_Size() const {return 64;};
char Pad10[2];
BnsTables::Shared::TableRef quests[64];
__int32 quests_Size() const {return 64;};
int quests_tableId() const {return 307;};
signed char missions[64];
__int32 missions_Size() const {return 64;};
signed char cases[64];
__int32 cases_Size() const {return 64;};
__int16 case_subtypes[64];
__int32 case_subtypes_Size() const {return 64;};
__int32 attack_power_equip_min;
__int32 attack_power_equip_max;
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
char Pad11[2];
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
char Pad12[2];
__int32 pve_boss_level_npc_attack_power_equip_min;
__int32 pve_boss_level_npc_attack_power_equip_max;
__int16 pve_boss_level_npc_defend_power_equip_value;
char Pad13[2];
__int32 pvp_attack_power_equip_min;
__int32 pvp_attack_power_equip_max;
__int16 pvp_defend_power_equip_value;
__int16 r_attack_stiff_duration_equip_value;
__int16 r_defend_stiff_duration_equip_value;
__int16 r_aoe_defend_power_value_equip;
__int16 r_heal_power_equip_value;
char Pad14[2];
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
char Pad15[2];
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
char Pad16[2];
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
char Pad17[2];
wchar_t* item_sound_move;
wchar_t* item_sound_dragstart;
wchar_t* item_sound_itemdrop;
signed char main_ability[2];
__int32 main_ability_Size() const {return 2;};
bool pccafe_ncsoft_korea_only;
char Pad18[1];
__int32 growth_id;
signed char growth_level_max;
signed char growth_step;
signed char growth_efficient_level;
char Pad19[1];
__int16 growth_exp_scale;
char Pad20[2];
__int32 random_option_group_id;
__int32 has_random_option_group_data_flag;
__int32 growth_recipe_exp_min;
__int32 growth_recipe_exp_max;
__int32 growth_recipe_exp[4];
__int32 growth_recipe_exp_Size() const {return 4;};
__int32 growth_recipe_cost;
BnsTables::Shared::TableRef growth_recipe_material[6];
__int32 growth_recipe_material_Size() const {return 6;};
int growth_recipe_material_tableId() const {return 202;};
__int16 growth_recipe_material_count[6];
__int32 growth_recipe_material_count_Size() const {return 6;};
signed char growth_fail_probability;
char Pad21[3];
__int32 awakening_recipe_cost;
BnsTables::Shared::TableRef awakening_recipe_material[6];
__int32 awakening_recipe_material_Size() const {return 6;};
int awakening_recipe_material_tableId() const {return 202;};
__int16 awakening_recipe_material_count[6];
__int32 awakening_recipe_material_count_Size() const {return 6;};
bool dispose_awakening_feed_item;
bool dispose_awakening_material;
char Pad22[2];
BnsTables::Shared::TableRef required_feed_item_brand_for_growth;
int required_feed_item_brand_for_growth_tableId() const {return 195;};
BnsTables::Shared::TableRef required_feed_item_for_growth;
int required_feed_item_for_growth_tableId() const {return 202;};
signed char required_seed_item_growth_course;
signed char required_seed_item_condition_type;
signed char required_seed_item_equip_level_min;
signed char required_seed_item_equip_level_max;
BnsTables::Shared::TableRef required_feed_item_brand_for_awakening;
int required_feed_item_brand_for_awakening_tableId() const {return 195;};
signed char required_feed_item_condition_type;
signed char required_feed_item_level_min;
char Pad23[2];
BnsTables::Shared::TableRef awakening_target_item[5];
__int32 awakening_target_item_Size() const {return 5;};
int awakening_target_item_tableId() const {return 202;};
__int16 required_awakening_bm_item_count;
signed char awakening_probability;
char Pad24[1];
BnsTables::Shared::TableRef awakening_fail_effect;
int awakening_fail_effect_tableId() const {return 118;};
bool lock_enable;
signed char time_limit_type;
char Pad25[2];
__int32 usable_duration;
__int64 fixed_expiration_time;
signed char delete_expiration_type;
char Pad26[3];
BnsTables::Shared::TableRef event_info;
int event_info_tableId() const {return 203;};
bool show_reward_preview;
char Pad27[3];
BnsTables::Shared::TableRef account_post_charge;
int account_post_charge_tableId() const {return 5;};
signed char fusion_category_1;
char Pad28[1];
__int16 fusion_category_2;
__int32 fusion_score;
signed char boast_event_type;
char Pad29[3];
__int32 improve_id;
signed char improve_level;
char Pad30[3];
BnsTables::Shared::TableRef improve_next_item;
int improve_next_item_tableId() const {return 202;};
BnsTables::Shared::TableRef improve_prev_item;
int improve_prev_item_tableId() const {return 202;};
BnsTables::Shared::TableRef job_change_item_exchange_group;
int job_change_item_exchange_group_tableId() const {return 234;};
__int32 item_generation;
BnsTables::Shared::TableRef manipulate_zone_env2_list[10];
__int32 manipulate_zone_env2_list_Size() const {return 10;};
int manipulate_zone_env2_list_tableId() const {return 481;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef nickname;
int nickname_tableId() const {return 435;};
signed char stage_number;
char Pad31[3];
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
int description2_tableId() const {return 435;};
BnsTables::Shared::TableRef description4_title;
int description4_title_tableId() const {return 435;};
BnsTables::Shared::TableRef description5_title;
int description5_title_tableId() const {return 435;};
BnsTables::Shared::TableRef description6_title;
int description6_title_tableId() const {return 435;};
BnsTables::Shared::TableRef description4;
int description4_tableId() const {return 435;};
BnsTables::Shared::TableRef description5;
int description5_tableId() const {return 435;};
BnsTables::Shared::TableRef description6;
int description6_tableId() const {return 435;};
BnsTables::Shared::TableRef description7;
int description7_tableId() const {return 435;};
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 435;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 435;};
BnsTables::Shared::TableRef identify_main_info;
int identify_main_info_tableId() const {return 435;};
BnsTables::Shared::TableRef identify_sub_info;
int identify_sub_info_tableId() const {return 435;};
BnsTables::Shared::TableRef identify_description;
int identify_description_tableId() const {return 435;};
BnsTables::Shared::TableRef legend_transform_title_name;
int legend_transform_title_name_tableId() const {return 435;};
signed char ui_icon_state;
char Pad32[3];
BnsTables::Shared::TableRef message[9];
__int32 message_Size() const {return 9;};
int message_tableId() const {return 282;};
bool invoke_fx_msg;
char Pad33[3];
wchar_t* tooltip_info;
__int32 item_score;
signed char item_style;
char Pad34[1];
__int16 release_contents_group;
BnsTables::Shared::TableRef randomoption_reset_cost_group;
int randomoption_reset_cost_group_tableId() const {return 79;};
bool recommend_in_item_growth;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(67, 2); }
		static __int16 TableId() { return 202; }
		static __int32 SubType() { return -1; }
		enum class game_category_1 {
			none = 0,
			equip = 1,
			enchant = 2,
			consumable = 3,
			production = 4,
			exchange = 5,
			box = 6,
		};

		enum class game_category_2 {
			none = 0,
			weapon = 1,
			accessory = 2,
			dress = 3,
			equip_gem = 4,
			weapon_gem = 5,
			build_up_stone = 6,
			badge = 7,
			relic = 8,
			skill_train_by_item_extract = 9,
			medicine = 10,
			food = 11,
			tool = 12,
			talisman = 13,
			equip_material = 14,
			union_material = 15,
			dress_material = 16,
			etc_material = 17,
			coin = 18,
			deed = 19,
			quest = 20,
			etc_change = 21,
			weapon_box = 22,
			accessory_box = 23,
			dress_box = 24,
			equip_gem_box = 25,
			weapon_gem_box = 26,
			material_box = 27,
			booty_box = 28,
			etc_box = 29,
		};

		enum class game_category_3 {
			none = 0,
			sword = 1,
			gauntlet = 2,
			aura_bangle = 3,
			axe = 4,
			dagger = 5,
			staff = 6,
			lyn_sword = 7,
			warlock_dagger = 8,
			soul_fighter_gauntlet = 9,
			gun = 10,
			great_sword = 11,
			long_bow = 12,
			spear = 13,
			orb = 14,
			dual_blade = 15,
			instrument = 16,
			necklace = 17,
			ring = 18,
			earring = 19,
			bracelet = 20,
			belt = 21,
			gloves = 22,
			soul = 23,
			soul_2 = 24,
			rune_1 = 25,
			rune_2 = 26,
			pet = 27,
			nova = 28,
			vehicle = 29,
			normal_state_appearance = 30,
			idle_state_appearance = 31,
			chatting_symbol = 32,
			portrait_appearance = 33,
			hypermove_appearance = 34,
			name_plate_appearance = 35,
			speech_bubble_appearance = 36,
			talk_social = 37,
			armlet_1 = 38,
			armlet_2 = 39,
			costume = 40,
			head_attach = 41,
			face_attach = 42,
			costume_attach = 43,
			summoned_pet_costume = 44,
			summoned_pet_hat = 45,
			summoned_pet_attach = 46,
			gam1 = 47,
			gan2 = 48,
			jin3 = 49,
			son4 = 50,
			ri5 = 51,
			gon6 = 52,
			tae7 = 53,
			geon8 = 54,
			synthesis_gem = 55,
			feed_gem = 56,
			diamond = 57,
			ruby = 58,
			topaz = 59,
			sapphire = 60,
			jade = 61,
			emerald = 62,
			amethyst = 63,
			aquamarine = 64,
			amber = 65,
			obsidian = 66,
			garnet = 67,
			ruby_topaz = 68,
			ruby_sapphire = 69,
			ruby_jade = 70,
			ruby_amethyst = 71,
			ruby_emerald = 72,
			ruby_diamond = 73,
			topaz_sapphire = 74,
			topaz_jade = 75,
			topaz_amethyst = 76,
			topaz_emerald = 77,
			topaz_diamond = 78,
			sapphire_jade = 79,
			sapphire_amethyst = 80,
			sapphire_emerald = 81,
			sapphire_diamond = 82,
			jade_amethyst = 83,
			jade_emerald = 84,
			jade_diamond = 85,
			amethyst_emerald = 86,
			amethyst_diamond = 87,
			emerald_diamond = 88,
			aquamarine_diamond = 89,
			amber_diamond = 90,
			obsidian_garnet = 91,
			corundum_white = 92,
			corundum_black = 93,
			corundum_pink = 94,
			corundum_yellow = 95,
			corundum_bluegreen = 96,
			corundum_blue = 97,
			corundum_aquamarine = 98,
			corundum_amber = 99,
			corundum_ruby = 100,
			corundum_amethyst = 101,
			corundum_jade = 102,
			skill_stone = 103,
			skill_stone_1 = 104,
			skill_stone_2 = 105,
			accessory_stone = 106,
			weapon_soul_gem = 107,
			regenerate_potion = 108,
			heal_potion = 109,
			secret_potion = 110,
			detox_potion = 111,
			magic_potion = 112,
			hwan_dan = 113,
			cook = 114,
			exp_cook = 115,
			alcohol = 116,
			normal_repair_tool = 117,
			urgency_repair_tool = 118,
			key = 119,
			weapon_gem_make = 120,
			festival_tool = 121,
			fishing_goods = 122,
			voucher = 123,
			reset_talisman = 124,
			revive_talisman = 125,
			party_revive_talisman = 126,
			growth_talisman = 127,
			unseal_talisman = 128,
			seal_talisman = 129,
			escape_talisman = 130,
			build_up_talisman = 131,
			valuables = 132,
			wealth = 133,
			holy_material = 134,
			weapon_material = 135,
			party_battle_material = 136,
			raid_material = 137,
			weapon_seed_material = 138,
			accessory_material = 139,
			synthetic_material = 140,
			weapon_exp = 141,
			accessory_exp = 142,
			weapon_maker = 143,
			talis_maker = 144,
			equip_gem_maker = 145,
			accessory_maker = 146,
			medicine_maker = 147,
			food_maker = 148,
			common_maker = 149,
			hypermove_material = 150,
			production_material = 151,
			cloth = 152,
			dress_design = 153,
			color_material = 154,
			pattern = 155,
			special_material = 156,
			normal_material = 157,
			weapon_coin = 158,
			token = 159,
			naryu_coin = 160,
			pvp_coin = 161,
			rvr_coin = 162,
			festival_coin = 163,
			hero_coin = 164,
			spirit_coin = 165,
			normal_coin = 166,
			skill_deed = 167,
			skill_take_deed = 168,
			ticket = 169,
			reset_deed = 170,
			extend_deed = 171,
			exchange_deed = 172,
			switch_deed = 173,
			normal_deed = 174,
			guild_deed = 175,
			quest_start = 176,
			quest_virtual = 177,
			chack_item = 178,
			sundry_item = 179,
			normal_weapon_box = 180,
			shape_weapon_box = 181,
			normal_accessory_box = 182,
			normal_dress_box = 183,
			normal_equip_gem_box = 184,
			normal_weapon_gem_box = 185,
			normal_material_box = 186,
			normal_booty_box = 187,
			normal_etc_box = 188,
			badge_1_premium = 189,
			badge_2_premium = 190,
			badge_3_premium = 191,
			badge_1_normal = 192,
			badge_2_normal = 193,
			badge_3_normal = 194,
			badge_appearance = 195,
			fusion_material = 196,
			card = 197,
			aquamarine_amber = 198,
			relic_1 = 199,
			star_stone = 200,
			skill_train_by_item_extract = 201,
			transform_coupon = 202,
			worldaccountcard_coupon = 203,
			glyph_coupon = 204,
		};

		enum class market_category_2 {
			none = 0,
			weapon = 1,
			equip_gem = 2,
			accessory = 3,
			dress = 4,
			weapon_gem = 5,
			medicine = 6,
			food = 7,
			build_up_stone = 8,
			talisman = 9,
			tool = 10,
			equip_material = 11,
			union_material = 12,
			dress_material = 13,
			etc_material = 14,
			coin = 15,
			deed = 16,
			quest = 17,
			etc_change = 18,
			etc_box = 19,
			badge = 20,
			relic = 21,
			skill_train_by_item_extract = 22,
			gold = 23,
			spirit = 24,
		};

		enum class market_category_3 {
			none = 0,
			sword = 1,
			gauntlet = 2,
			axe = 3,
			staff = 4,
			aura_bangle = 5,
			dagger = 6,
			gam1 = 7,
			gan2 = 8,
			jin3 = 9,
			son4 = 10,
			ri5 = 11,
			gon6 = 12,
			tae7 = 13,
			geon8 = 14,
			great_sword = 15,
			ring = 16,
			earring = 17,
			necklace = 18,
			costume = 19,
			head_attach = 20,
			face_attach = 21,
			costume_attach = 22,
			summoned_pet_costume = 23,
			summoned_pet_hat = 24,
			summoned_pet_attach = 25,
			ruby = 26,
			topaz = 27,
			sapphire = 28,
			jade = 29,
			amethyst = 30,
			emerald = 31,
			diamond = 32,
			regenerate_potion = 33,
			heal_potion = 34,
			secret_potion = 35,
			detox_potion = 36,
			lyn_sword = 37,
			warlock_dagger = 38,
			soul_fighter_gauntlet = 39,
			gun = 40,
			cook = 41,
			alcohol = 42,
			normal_repair_tool = 43,
			urgency_repair_tool = 44,
			unseal_talisman = 45,
			revive_talisman = 46,
			escape_talisman = 47,
			feed_gem = 48,
			weapon_gem_etc = 49,
			long_bow = 50,
			magic_potion = 51,
			key = 52,
			hwan_dan = 53,
			exp_cook = 54,
			weapon_gem_make = 55,
			festival_tool = 56,
			sundry_item = 57,
			reset_talisman = 58,
			party_revive_talisman = 59,
			weapon_maker = 60,
			talis_maker = 61,
			equip_gem_maker = 62,
			accessory_maker = 63,
			medicine_maker = 64,
			food_maker = 65,
			growth_talisman = 66,
			build_up_talisman = 67,
			valuables = 68,
			wealth = 69,
			growth_material = 70,
			holy_material = 71,
			common_maker = 72,
			special_material = 73,
			hypermove_material = 74,
			normal_material = 75,
			production_material = 76,
			cloth = 77,
			obsidian = 78,
			amber = 79,
			garnet = 80,
			aquamarine = 81,
			belt = 82,
			bracelet = 83,
			seal_talisman = 84,
			dress_design = 85,
			fishing_goods = 86,
			badge_1 = 87,
			weapon_gem_guardian = 88,
			spear = 89,
			orb = 90,
			ruby_diamond = 91,
			vehicle = 92,
			card = 93,
			dual_blade = 94,
			glyph = 95,
			topaz_diamond = 96,
			normal_state_appearance = 97,
			idle_state_appearance = 98,
			chatting_symbol = 99,
			sapphire_diamond = 100,
			portrait_appearance = 101,
			hypermove_appearance = 102,
			jade_diamond = 103,
			accessory_stone = 104,
			amethyst_diamond = 105,
			emerald_diamond = 106,
			soul = 107,
			soul_2 = 108,
			gloves = 109,
			pet_1 = 110,
			nova = 111,
			color_material = 112,
			rune_1 = 113,
			rune_2 = 114,
			aquamarine_diamond = 115,
			pattern = 116,
			normal_coin = 117,
			skill_take_deed = 118,
			normal_deed = 119,
			quest_start = 120,
			chack_item = 121,
			normal_etc_box = 122,
			skill_stone_1 = 123,
			skill_stone_2 = 124,
			amber_diamond = 125,
			obsidian_garnet = 126,
			name_plate_appearance = 127,
			speech_bubble_appearance = 128,
			instrument = 129,
			aquamarine_amber = 130,
			talk_social = 131,
			relic_1 = 132,
			star_stone = 133,
			weapon_soul_gem = 134,
			voucher = 135,
			armlet_1 = 136,
			armlet_2 = 137,
			skill_train_by_item_extract = 138,
			gold = 139,
			spirit = 140,
			skill_train_by_item_extract_neck = 141,
			skill_train_by_item_extract_finger = 142,
			skill_train_by_item_extract_ear = 143,
			skill_train_by_item_extract_wrist = 144,
			skill_train_by_item_extract_waist = 145,
			skill_train_by_item_extract_gloves = 146,
			costume_box = 147,
		};

		enum class equip_job_check {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class equip_sex {
			none = 0,
			all = 1,
			male = 2,
			female = 3,
		};

		enum class equip_race {
			none = 0,
			all = 1,
			jin = 2,
			gon = 3,
			lyn = 4,
			kun = 5,
			summoned_all = 6,
			summoned_cat = 7,
		};

		enum class job_specialization {
			job_specialization_none = 0,
			gyeyeor1 = 1,
			gyeyeor2 = 2,
			gyeyeor3 = 3,
		};

		enum class equip_type {
			none = 0,
			weapon = 1,
			costume = 2,
			earring = 3,
			eyeglass = 4,
			hat = 5,
			ring = 6,
			necklace = 7,
			gem_1 = 8,
			gem_2 = 9,
			gem_3 = 10,
			gem_4 = 11,
			gem_5 = 12,
			gem_6 = 13,
			gem_7 = 14,
			gem_8 = 15,
			attach = 16,
			belt = 17,
			bracelet = 18,
			soul = 19,
			soul_2 = 20,
			gloves = 21,
			pet_1 = 22,
			pet_2 = 23,
			rune_1 = 24,
			rune_2 = 25,
			nova = 26,
			badge_1_premium = 27,
			badge_2_premium = 28,
			badge_3_premium = 29,
			badge_1_normal = 30,
			badge_2_normal = 31,
			badge_3_normal = 32,
			badge_appearance = 33,
			vehicle = 34,
			normal_state_appearance = 35,
			idle_state_appearance = 36,
			chatting_symbol = 37,
			portrait_appearance = 38,
			hypermove_appearance = 39,
			name_plate_appearance = 40,
			speech_bubble_appearance = 41,
			talk_social = 42,
			armlet_1 = 43,
			armlet_2 = 44,
		};

		enum class legend_grade_background_particle_type {
			none = 0,
			type_gold = 1,
			type_redup = 2,
			type_goldup = 3,
			type_redupper = 4,
		};

		enum class use_recycle_group {
			none = 0,
			class_val = 1,
			item_1 = 2,
			item_2 = 3,
			class_2 = 4,
			db = 5,
			gadget = 6,
		};

		enum class pouch_appearance {
			none = 0,
			money = 1,
			effect = 2,
			distribution_pouch = 3,
			normal_pouch_grade1 = 4,
			normal_pouch_grade2 = 5,
			normal_pouch_grade3 = 6,
			normal_pouch_grade4 = 7,
			normal_pouch_grade5 = 8,
			normal_pouch_grade6 = 9,
			normal_pouch_grade7 = 10,
			quality_pouch_grade1 = 11,
			quality_pouch_grade2 = 12,
			quality_pouch_grade3 = 13,
			quality_pouch_grade4 = 14,
			quality_pouch_grade5 = 15,
			quality_pouch_grade6 = 16,
			quality_pouch_grade7 = 17,
			high_quality_pouch_grade1 = 18,
			high_quality_pouch_grade2 = 19,
			high_quality_pouch_grade3 = 20,
			high_quality_pouch_grade4 = 21,
			high_quality_pouch_grade5 = 22,
			high_quality_pouch_grade6 = 23,
			high_quality_pouch_grade7 = 24,
			normal_box_grade1 = 25,
			normal_box_grade2 = 26,
			normal_box_grade3 = 27,
			normal_box_grade4 = 28,
			normal_box_grade5 = 29,
			normal_box_grade6 = 30,
			normal_box_grade7 = 31,
			quality_box_grade1 = 32,
			quality_box_grade2 = 33,
			quality_box_grade3 = 34,
			quality_box_grade4 = 35,
			quality_box_grade5 = 36,
			quality_box_grade6 = 37,
			quality_box_grade7 = 38,
			high_quality_box_grade1 = 39,
			high_quality_box_grade2 = 40,
			high_quality_box_grade3 = 41,
			high_quality_box_grade4 = 42,
			high_quality_box_grade5 = 43,
			high_quality_box_grade6 = 44,
			high_quality_box_grade7 = 45,
			normal_gembox_grade1 = 46,
			normal_gembox_grade2 = 47,
			normal_gembox_grade3 = 48,
			normal_gembox_grade4 = 49,
			normal_gembox_grade5 = 50,
			normal_gembox_grade6 = 51,
			normal_gembox_grade7 = 52,
			quality_gembox_grade1 = 53,
			quality_gembox_grade2 = 54,
			quality_gembox_grade3 = 55,
			quality_gembox_grade4 = 56,
			quality_gembox_grade5 = 57,
			quality_gembox_grade6 = 58,
			quality_gembox_grade7 = 59,
			high_quality_gembox_grade1 = 60,
			high_quality_gembox_grade2 = 61,
			high_quality_gembox_grade3 = 62,
			high_quality_gembox_grade4 = 63,
			high_quality_gembox_grade5 = 64,
			high_quality_gembox_grade6 = 65,
			high_quality_gembox_grade7 = 66,
		};

		enum class forwarding_types {
			progress_mission = 0,
			acquire_quest = 1,
			skill_target = 2,
			mission_step_rollback = 3,
		};

		enum class main_ability {
			none = 0,
			attack_power_equip_min_and_max = 1,
			defend_power_equip_value = 2,
			defend_resist_power_equip_value = 3,
			defend_critical_base_percent = 4,
			defend_critical_value = 5,
			defend_dodge_base_percent = 6,
			defend_dodge_value = 7,
			defend_parry_base_percent = 8,
			defend_parry_value = 9,
			defend_stiff_duration_base_percent = 10,
			defend_stiff_duration_value = 11,
			defend_physical_damage_reduce_percent = 12,
			defend_force_damage_reduce_percent = 13,
			defend_damage_modify_percent = 14,
			defend_damage_modify_diff = 15,
			defend_perfect_parry_reduce_percent = 16,
			defend_counter_reduce_percent = 17,
			attack_hit_base_percent = 18,
			attack_hit_value = 19,
			attack_critical_base_percent = 20,
			attack_critical_damage_percent = 21,
			attack_critical_value = 22,
			attack_stiff_duration_base_percent = 23,
			attack_stiff_duration_value = 24,
			attack_damage_modify_percent = 25,
			attack_damage_modify_diff = 26,
			attack_pierce_value = 27,
			attack_concentrate_value = 28,
			max_hp = 29,
			hp_regen = 30,
			hp_regen_combat = 31,
			cast_duration_base_percent = 32,
			cast_duration_value = 33,
			hate_power_value = 34,
			heal_power_value = 35,
			pve_boss_level_npc_attack_power_equip_min_and_max = 36,
			pve_boss_level_npc_defend_power_equip_value = 37,
			pvp_attack_power_equip_min_and_max = 38,
			pvp_defend_power_equip_value = 39,
			abnormal_defend_base_percent = 40,
			abnormal_defend_power_value = 41,
			attack_critical_damage_value = 42,
			abnormal_attack_power_value = 43,
			abnormal_attack_base_percent = 44,
			max_guard_gauge = 45,
			attack_attribute_value = 46,
			attack_attribute_base_percent = 47,
			r_attack_stiff_duration_equip_value = 48,
			r_defend_stiff_duration_equip_value = 49,
			r_aoe_defend_power_value_equip = 50,
			r_heal_power_equip_value = 51,
			r_defend_strength_equip_value = 52,
			r_attack_precise_equip_value = 53,
			r_attack_aoe_pierce_value_equip = 54,
			r_attack_abnormal_hit_equip_value = 55,
			r_defend_abnormal_dodge_equip_value = 56,
			r_support_power_equip_value = 57,
			r_hypermove_power_equip_value = 58,
			defend_difficulty_type_damage_reduce_percent = 59,
			attack_attribute_value_equip = 60,
			abnormal_attack_power_value_equip = 61,
			attack_critical_damage_value_equip = 62,
			attack_pierce_base_percent = 63,
			heal_power_base_percent = 64,
			race_type_1_attack_damage_modify_percent = 65,
			race_type_2_attack_damage_modify_percent = 66,
			race_type_3_attack_damage_modify_percent = 67,
			race_type_4_attack_damage_modify_percent = 68,
			race_type_5_attack_damage_modify_percent = 69,
			race_type_6_attack_damage_modify_percent = 70,
			race_type_7_attack_damage_modify_percent = 71,
			race_type_1_defend_damage_modify_percent = 72,
			race_type_2_defend_damage_modify_percent = 73,
			race_type_3_defend_damage_modify_percent = 74,
			race_type_4_defend_damage_modify_percent = 75,
			race_type_5_defend_damage_modify_percent = 76,
			race_type_6_defend_damage_modify_percent = 77,
			race_type_7_defend_damage_modify_percent = 78,
			attribute_type_1_attack_damage_modify_percent = 79,
			attribute_type_2_attack_damage_modify_percent = 80,
			attribute_type_3_attack_damage_modify_percent = 81,
			attribute_type_4_attack_damage_modify_percent = 82,
			attribute_type_5_attack_damage_modify_percent = 83,
			attribute_type_6_attack_damage_modify_percent = 84,
			attribute_type_7_attack_damage_modify_percent = 85,
			attribute_type_8_attack_damage_modify_percent = 86,
			attribute_type_9_attack_damage_modify_percent = 87,
			attribute_type_10_attack_damage_modify_percent = 88,
			attribute_type_11_attack_damage_modify_percent = 89,
			attribute_type_12_attack_damage_modify_percent = 90,
			attribute_type_1_defend_damage_modify_percent = 91,
			attribute_type_2_defend_damage_modify_percent = 92,
			attribute_type_3_defend_damage_modify_percent = 93,
			attribute_type_4_defend_damage_modify_percent = 94,
			attribute_type_5_defend_damage_modify_percent = 95,
			attribute_type_6_defend_damage_modify_percent = 96,
			attribute_type_7_defend_damage_modify_percent = 97,
			attribute_type_8_defend_damage_modify_percent = 98,
			attribute_type_9_defend_damage_modify_percent = 99,
			attribute_type_10_defend_damage_modify_percent = 100,
			attribute_type_11_defend_damage_modify_percent = 101,
			attribute_type_12_defend_damage_modify_percent = 102,
			defend_critical_damage_value = 103,
			defend_critical_damage_value_equip = 104,
			attack_parry_pierce_percent = 105,
			defend_critical_damage_percent = 106,
			job_ability_1 = 107,
			job_ability_2 = 108,
			heal_power_diff = 109,
			aoe_defend_base_percent = 110,
			aoe_defend_power_value = 111,
			hate_power_equip_value = 112,
			additional_exp_diff_by_kill = 113,
			additional_exp_percent_by_kill = 114,
			attack_abnormal_hit_equip_value = 115,
			defend_abnormal_resistance_equip_value = 116,
		};

		enum class required_seed_item_growth_course {
			none = 0,
			normal = 1,
			coin = 2,
		};

		enum class required_seed_item_condition_type {
			none = 0,
			all = 1,
			weapon = 2,
			sword = 3,
			blade_master_sword = 4,
			lyn_sword = 5,
			gauntlet = 6,
			staff = 7,
			aura_bangle = 8,
			dagger = 9,
			axe = 10,
			accessory = 11,
			ring = 12,
			earring = 13,
			necklace = 14,
			belt = 15,
			bracelet = 16,
			soul = 17,
			assassin_dagger = 18,
			warlock_dagger = 19,
			gem_1 = 20,
			gem_2 = 21,
			gem_3 = 22,
			gem_4 = 23,
			gem_5 = 24,
			gem_6 = 25,
			gem_7 = 26,
			gem_8 = 27,
			soul_2 = 28,
			gloves = 29,
			pet_1 = 30,
			pet_2 = 31,
			kung_fu_fighter_gauntlet = 32,
			soul_fighter_gauntlet = 33,
			shooter_gun = 34,
			rune_1 = 35,
			rune_2 = 36,
			weapon_enchant_gem = 37,
			weapon_enchant_gem_1 = 38,
			weapon_enchant_gem_2 = 39,
			great_sword = 40,
			long_bow = 41,
			spear = 42,
			orb = 43,
			dual_blade = 44,
			nova = 45,
			badge_1 = 46,
			badge_2 = 47,
			badge_3 = 48,
			badge_appearance = 49,
			accessory_enchant_gem = 50,
			ring_enchant_gem_1 = 51,
			ring_enchant_gem_2 = 52,
			ring_enchant_gem_3 = 53,
			earring_enchant_gem_1 = 54,
			earring_enchant_gem_2 = 55,
			earring_enchant_gem_3 = 56,
			necklace_enchant_gem_1 = 57,
			necklace_enchant_gem_2 = 58,
			necklace_enchant_gem_3 = 59,
			belt_enchant_gem_1 = 60,
			belt_enchant_gem_2 = 61,
			belt_enchant_gem_3 = 62,
			bracelet_enchant_gem_1 = 63,
			bracelet_enchant_gem_2 = 64,
			bracelet_enchant_gem_3 = 65,
			gloves_enchant_gem_1 = 66,
			gloves_enchant_gem_2 = 67,
			gloves_enchant_gem_3 = 68,
			instrument = 69,
			armlet_1 = 70,
			armlet_2 = 71,
		};

		enum class time_limit_type {
			invalid = 0,
			none = 1,
			duration = 2,
			fixed = 3,
			duration_with_fixed = 4,
			undefined = 5,
		};

		enum class delete_expiration_type {
			none = 0,
			sell = 1,
		};

		enum class fusion_category_1 {
			none = 0,
			all = 1,
			dress = 2,
			summoned_pet_dress = 3,
			equip_gem = 4,
			weapon_gem = 5,
			weapon = 6,
			accessory = 7,
			soul = 8,
			soul_2 = 9,
			nova = 10,
			pet = 11,
			corundum = 12,
		};

		enum class fusion_category_2 {
			none = 0,
			costume = 1,
			head_attach = 2,
			face_attach = 3,
			costume_attach = 4,
			summoned_pet_costume = 5,
			summoned_pet_hat = 6,
			summoned_pet_attach = 7,
			gam1 = 8,
			gan2 = 9,
			jin3 = 10,
			son4 = 11,
			ri5 = 12,
			gon6 = 13,
			tae7 = 14,
			geon8 = 15,
			weapon_gem = 16,
			sword = 17,
			gauntlet = 18,
			aura_bangle = 19,
			axe = 20,
			dagger = 21,
			staff = 22,
			lyn_sword = 23,
			warlock_dagger = 24,
			soul_fighter_gauntlet = 25,
			gun = 26,
			long_bow = 27,
			great_sword = 28,
			orb = 29,
			necklace = 30,
			ring = 31,
			earring = 32,
			bracelet = 33,
			belt = 34,
			gloves = 35,
			soul = 36,
			soul_2 = 37,
			nova = 38,
			pet = 39,
			corundum_white = 40,
			corundum_black = 41,
			corundum_pink = 42,
			corundum_yellow = 43,
			corundum_bluegreen = 44,
			corundum_blue = 45,
			dual_blade = 46,
			instrument = 47,
		};

		enum class boast_event_type {
			none = 0,
			conditional = 1,
			always = 2,
		};

		enum class ui_icon_state {
			none = 0,
			decompose = 1,
			sell = 2,
			exchange = 3,
		};

		enum class item_style {
			none = 0,
			normal = 1,
			pve_weapon1 = 2,
			pve_weapon2 = 3,
			raid_weapon1 = 4,
			hc_weapon1 = 5,
			awaken1 = 6,
			awaken2 = 7,
			awaken3 = 8,
			pvp = 9,
			soul_long = 10,
			soul_short = 11,
		};

		enum class weapon_type {
			none = 0,
			bare_hand = 1,
			sword = 2,
			gauntlet = 3,
			aura_bangle = 4,
			pistol = 5,
			rifle = 6,
			two_handed_axe = 7,
			bow = 8,
			staff = 9,
			dagger = 10,
			pet_1 = 11,
			pet_2 = 12,
			gun = 13,
			great_sword = 14,
			long_bow = 15,
			spear = 16,
			orb = 17,
			dual_blade = 18,
			instrument = 19,
		};

		enum class gem_slot_type {
			closed = 0,
			minus_one = 1,
			plus_zero = 2,
			plus_one = 3,
			minus_four = 4,
			minus_three = 5,
			minus_two = 6,
			plus_two = 7,
			plus_three = 8,
			plus_four = 9,
		};

		enum class weapon_appearance_change_type {
			none = 0,
			used_only_as_target_weapon = 1,
			used_only_as_applying_weapon = 2,
			both = 3,
		};

		enum class custom_dress_design_state {
			none = 0,
			disabled = 1,
			activated = 2,
		};

		enum class grocery_type {
			other = 0,
			repair = 1,
			seal = 2,
			random_box = 3,
			cave_escape = 4,
			key = 5,
			weapon_gem_slot_expander = 6,
			sealed = 7,
			weapon_gem_slot_adder = 8,
			messenger = 9,
			base_camp_warp = 10,
			pet_food = 11,
			reset_dungeon = 12,
			skill_book = 13,
			fishing_paste = 14,
			badge = 15,
			scroll = 16,
			fusion_subitem = 17,
			card = 18,
			relic = 19,
			relic_material = 20,
			star_stone = 21,
			voucher = 22,
			capital_teleport = 23,
			skill_train_by_item_extract = 24,
			shuffle_glyph_cost_ticket = 25,
			shuffle_worldaccountcard_cost_ticket = 26,
		};

		enum class recharge_heart_type {
			none = 0,
			instant_heart = 1,
			heart = 2,
		};

		enum class message_range {
			none = 0,
			district = 1,
			all = 2,
		};

		enum class grocery_effect_type {
			heal_potion = 0,
			sp_potion = 1,
			buff_item_01 = 2,
			buff_item_02 = 3,
			buff_item_03 = 4,
			buff_item_04 = 5,
			buff_item_05 = 6,
			buff_item_06 = 7,
			buff_item_07 = 8,
			buff_item_08 = 9,
			buff_item_09 = 10,
			buff_item_10 = 11,
			buff_item_11 = 12,
			buff_item_12 = 13,
			buff_item_13 = 14,
			buff_item_14 = 15,
			buff_item_15 = 16,
			buff_item_16 = 17,
			buff_item_17 = 18,
			buff_item_18 = 19,
			buff_item_19 = 20,
			buff_item_20 = 21,
			etc = 22,
		};

		enum class use_fail_caster_flag {
			none = 0,
			stun = 1,
			airdash = 2,
			knockback = 3,
			bind_phantom = 4,
			link = 5,
			detection = 6,
			internal_injury = 7,
			immediately_exec = 8,
			concentration = 9,
			infinity_shot = 10,
			down = 11,
			swoon = 12,
			defence = 13,
			kneel = 14,
			provocation = 15,
			midair_1 = 16,
			midair_2 = 17,
			midair_3 = 18,
			frostbite = 19,
			magnetic_seal = 20,
			fast_freezing = 21,
			rupture = 22,
			impregnability = 23,
			prickblood = 24,
			wildfire_1 = 25,
			wildfire_2 = 26,
			wildfire_3 = 27,
			hide = 28,
			burrow = 29,
			smokescreen = 30,
			embers = 31,
			poison = 32,
			applied_poison = 33,
			spider_web = 34,
			time_bomb = 35,
			defence_block = 36,
			dash_block = 37,
			dexterity = 38,
			soulblade_1 = 39,
			soulblade_2 = 40,
			soulblade_3 = 41,
			joint = 42,
			flydragon = 43,
			landdragon = 44,
			silverweb_1 = 45,
			silverweb_2 = 46,
			justguard = 47,
			force_flag_1 = 48,
			force_flag_2 = 49,
			force_flag_3 = 50,
			catchshield = 51,
			poundshort = 52,
			axechopshort = 53,
			swingstrikeshort = 54,
			chilblain = 55,
			frontdown = 56,
			bleeding = 57,
			npc_state_1 = 58,
			npc_state_2 = 59,
			npc_state_3 = 60,
			npc_state_4 = 61,
			npc_state_5 = 62,
			npc_state_6 = 63,
			npc_state_7 = 64,
			npc_state_8 = 65,
			hardwall_break = 66,
			react_link = 67,
			counter = 68,
			Shadow = 69,
			Shuriken = 70,
			Instantkick = 71,
			Hyperkick = 72,
			Saver = 73,
			HeartStab = 74,
			LeafDodge = 75,
			DragonKick = 76,
			BurstBlow = 77,
			Blood = 78,
			BloodFullStack = 79,
			Poison2 = 80,
			Poison2FullStack = 81,
			TankingDrain = 82,
			EmberFullStack = 83,
			PoisonFullStack = 84,
			FireBit = 85,
			FireBitFullStack = 86,
			IceBit = 87,
			Hole = 88,
			HoleFullStack = 89,
			Bubble = 90,
			Swallow = 91,
			FireBit2 = 92,
			IceBit2 = 93,
			IceBitFullStack = 94,
			FireWall1 = 95,
			FireWall2 = 96,
			FireWall3 = 97,
			FireWall4 = 98,
			HighKick = 99,
			Abdomen = 100,
			ShortBurst = 101,
			MartialFullHit = 102,
			Smash = 103,
			Hole1 = 104,
			Hole2 = 105,
			Hole3 = 106,
			TargetHole1 = 107,
			TargetHole2 = 108,
			TargetHole3 = 109,
			Hornet = 110,
			MorningGlory = 111,
			cannot_resurrect = 112,
			enable_guild_battle_field = 113,
			Immune_link = 114,
			GhostX0 = 115,
			GhostX1 = 116,
			GhostX2 = 117,
			GhostX3 = 118,
			Thornbus = 119,
			BloodBurst = 120,
			AdventMark1 = 121,
			AdventMark2 = 122,
			HyperMove = 123,
			Talisman = 124,
			Spector01 = 125,
			Spector02 = 126,
			Spector03 = 127,
			Phantomsoul = 128,
			BlueSky = 129,
			EgoAutoParry = 130,
			Pierce = 131,
			burn = 132,
			AttackGlide = 133,
			SecondGaugeStopped = 134,
			BigBossJump = 135,
			BigBossState_1 = 136,
			JobSkillFlag_1 = 137,
			JobSkillFlag_2 = 138,
			JobSkillFlag_3 = 139,
			JobSkillFlag_4 = 140,
			JobSkillFlag_5 = 141,
			JobSkillFlag_6 = 142,
			JobSkillFlag_7 = 143,
			JobSkillFlag_8 = 144,
			JobSkillFlag_9 = 145,
			JobSkillFlag_10 = 146,
			JobSkillFlag_11 = 147,
			JobSkillFlag_12 = 148,
			JobSkillFlag_13 = 149,
			JobSkillFlag_14 = 150,
			JobSkillFlag_15 = 151,
			JobSkillFlag_16 = 152,
			JobSkillFlag_17 = 153,
			JobSkillFlag_18 = 154,
			JobSkillFlag_19 = 155,
			JobSkillFlag_20 = 156,
			JobSkillFlag_21 = 157,
			JobSkillFlag_22 = 158,
			JobSkillFlag_23 = 159,
			JobSkillFlag_24 = 160,
			JobSkillFlag_25 = 161,
			JobSkillFlag_26 = 162,
			JobSkillFlag_27 = 163,
			JobSkillFlag_28 = 164,
			JobSkillFlag_29 = 165,
			JobSkillFlag_30 = 166,
			JobSkillFlag_31 = 167,
			JobSkillFlag_32 = 168,
			JobSkillFlag_33 = 169,
			JobSkillFlag_34 = 170,
			JobSkillFlag_35 = 171,
			JobSkillFlag_36 = 172,
			JobSkillFlag_37 = 173,
			JobSkillFlag_38 = 174,
			JobSkillFlag_39 = 175,
			JobSkillFlag_40 = 176,
			JobSkillFlag_41 = 177,
			JobSkillFlag_42 = 178,
			JobSkillFlag_43 = 179,
			JobSkillFlag_44 = 180,
			JobSkillFlag_45 = 181,
			JobSkillFlag_46 = 182,
			JobSkillFlag_47 = 183,
			JobSkillFlag_48 = 184,
			JobSkillFlag_49 = 185,
			JobSkillFlag_50 = 186,
			JobSkillFlag_51 = 187,
			JobSkillFlag_52 = 188,
			JobSkillFlag_53 = 189,
			JobSkillFlag_54 = 190,
			JobSkillFlag_55 = 191,
			JobSkillFlag_56 = 192,
			npc_skill_1 = 193,
			npc_skill_2 = 194,
			npc_skill_3 = 195,
			npc_skill_4 = 196,
			npc_skill_5 = 197,
			npc_skill_6 = 198,
			npc_skill_7 = 199,
			npc_skill_8 = 200,
			npc_skill_9 = 201,
			npc_skill_10 = 202,
			npc_skill_11 = 203,
			npc_skill_12 = 204,
			stun_miss = 205,
			down_miss = 206,
			Struggle = 207,
			boutiquefree = 208,
			tumbling_block = 209,
			PeaceArea = 210,
			perfect_dodged = 211,
			kneel_miss = 212,
			glyph_1 = 213,
			glyph_2 = 214,
			glyph_3 = 215,
			glyph_4 = 216,
			glyph_5 = 217,
			glyph_6 = 218,
			glyph_7 = 219,
			glyph_8 = 220,
			glyph_9 = 221,
			glyph_10 = 222,
			glyph_11 = 223,
			glyph_12 = 224,
			glyph_13 = 225,
			glyph_14 = 226,
			glyph_15 = 227,
			glyph_16 = 228,
			glyph_17 = 229,
			glyph_18 = 230,
			glyph_19 = 231,
			glyph_20 = 232,
			Break_1 = 233,
			Break_2 = 234,
			Break_3 = 235,
			condition_event_1 = 236,
			condition_event_2 = 237,
			condition_event_3 = 238,
			condition_event_4 = 239,
			condition_event_5 = 240,
			condition_event_6 = 241,
			condition_event_7 = 242,
			condition_event_8 = 243,
			condition_event_9 = 244,
			condition_event_10 = 245,
			linked = 246,
		};

		enum class grocery_batch_type {
			none = 0,
			glyph = 1,
			soul_boost = 2,
			bonus_exp = 3,
			bonus_mastery_exp = 4,
			bonus_account_exp = 5,
			bonus_sealed_dungeon_exp = 6,
			voucher_money = 7,
			voucher_virtual_currency = 8,
		};

		enum class gem_type {
			none = 0,
			weapon_gem = 1,
			equip_gem = 2,
			random_stat_equip_gem = 3,
			feed_gem = 4,
			weapon_enchant_gem = 5,
			pet_gem = 6,
			accessory_enchant_gem = 7,
			weapon_soul_gem = 8,
		};

		enum class weapon_gem_type {
			none = 0,
			ruby = 1,
			topaz = 2,
			sapphire = 3,
			jade = 4,
			amethyst = 5,
			emerald = 6,
			diamond = 7,
			obsidian = 8,
			amber = 9,
			garnet = 10,
			aquamarine = 11,
			ruby_topaz = 12,
			ruby_sapphire = 13,
			ruby_jade = 14,
			ruby_amethyst = 15,
			ruby_emerald = 16,
			ruby_diamond = 17,
			topaz_sapphire = 18,
			topaz_jade = 19,
			topaz_amethyst = 20,
			topaz_emerald = 21,
			topaz_diamond = 22,
			sapphire_jade = 23,
			sapphire_amethyst = 24,
			sapphire_emerald = 25,
			sapphire_diamond = 26,
			jade_amethyst = 27,
			jade_emerald = 28,
			jade_diamond = 29,
			amethyst_emerald = 30,
			amethyst_diamond = 31,
			emerald_diamond = 32,
			aquamarine_diamond = 33,
			amber_diamond = 34,
			obsidian_garnet = 35,
			corundum_white = 36,
			corundum_black = 37,
			corundum_pink = 38,
			corundum_yellow = 39,
			corundum_bluegreen = 40,
			corundum_blue = 41,
			corundum_aquamarine = 42,
			corundum_amber = 43,
			corundum_ruby = 44,
			corundum_amethyst = 45,
			corundum_jade = 46,
			aquamarine_amber = 47,
		};

		enum class weapon_enchant_gem_slot_type {
			none = 0,
			first = 1,
			second = 2,
		};

		enum class accessory_enchant_gem_equip_accessory_type {
			none = 0,
			ring = 1,
			earring = 2,
			necklace = 3,
			belt = 4,
			bracelet = 5,
			gloves = 6,
		};

		enum class accessory_enchant_gem_slot_type {
			none = 0,
			first = 1,
			second = 2,
			third = 3,
		};

		enum class attack_effect_skill_result {
			none = 0,
			hit = 1,
			miss = 2,
			dodge = 3,
			parry = 4,
			perfect_parry = 5,
			bounce = 6,
			counter = 7,
			critical_hit = 8,
			hit_critical_hit = 9,
			back_hit_critical_hit = 10,
			not_hit = 11,
			all = 12,
			hit_critical_hit_parry = 13,
			parry_perfect_parry = 14,
			front_hit_critical_hit = 15,
			parry_perfect_parry_counter = 16,
			parry_perfect_parry_dodge = 17,
			parry_dodge = 18,
		};

		enum class accessory_type {
			accessory = 0,
			costume_attach = 1,
			ring = 2,
			earring = 3,
			necklace = 4,
			belt = 5,
			bracelet = 6,
			soul = 7,
			soul_2 = 8,
			gloves = 9,
			rune_1 = 10,
			rune_2 = 11,
			nova = 12,
			vehicle = 13,
			normal_state_appearance = 14,
			idle_state_appearance = 15,
			chatting_symbol = 16,
			portrait_appearance = 17,
			hypermove_appearance = 18,
			name_plate_appearance = 19,
			speech_bubble_appearance = 20,
			talk_social = 21,
			armlet_1 = 22,
			armlet_2 = 23,
		};

		enum class enchant_type {
			none = 0,
			enchant = 1,
			transient_enchant = 2,
		};
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