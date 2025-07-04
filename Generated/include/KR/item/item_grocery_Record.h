/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_grocery_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
signed char grocery_type;
char Pad_sub_1[1];
__int16 stack_count;
__int16 store_bundle_count;
char Pad_sub_2[2];
BnsTables::Shared::TableRef skill3;
int skill3_tableId() const {return 349;};
BnsTables::Shared::TableRef duel_skill3;
int duel_skill3_tableId() const {return 349;};
signed char skill_limit_level;
signed char skill_limit_level_max;
signed char skill_limit_mastery_level;
signed char skill_limit_mastery_level_max;
signed char skill_limit_job;
char Pad_sub_3[3];
BnsTables::Shared::TableRef skill_limit_faction;
int skill_limit_faction_tableId() const {return 139;};
__int16 skill_limit_faction_level;
char Pad_sub_4[2];
BnsTables::Shared::TableRef skill_limit_activated_faction;
int skill_limit_activated_faction_tableId() const {return 139;};
signed char recharge_heart_type;
bool disable_vitality_zero;
bool disable_vitality_none_zero;
char Pad_sub_5[1];
__int32 skill_score_point;
BnsTables::Shared::TableRef skill_skin_acquire;
int skill_skin_acquire_tableId() const {return 371;};
BnsTables::Shared::TableRef resurrect_effect;
int resurrect_effect_tableId() const {return 118;};
__int32 bonus_exp;
__int32 bonus_mastery_exp;
__int32 bonus_account_exp;
__int32 bonus_sealed_dungeon_exp;
BnsTables::Shared::TableRef bonus_sealed_dungeon_id;
int bonus_sealed_dungeon_id_tableId() const {return 117;};
__int32 energy_multiple_point;
__int16 additional_mastery_stat_point;
__int16 skill_build_up_point;
__int32 soul_boost_season_id;
__int32 soul_boost_item_point;
__int32 acquire_money;
__int32 acquire_blue_stone;
__int32 acquire_red_stone;
bool consume_by_skill;
char Pad_sub_6[1];
__int16 repair_level_min;
__int16 repair_level_max;
char Pad_sub_7[2];
__int32 repair_duration;
signed char repair_grade;
bool necessary_campfire;
char Pad_sub_8[2];
BnsTables::Shared::TableRef valid_attraction_name;
int valid_attraction_name_tableId() const {return 434;};
BnsTables::Shared::TableRef dest_zone;
int dest_zone_tableId() const {return 478;};
signed char expand_weapon_gem_slot_level[2];
__int32 expand_weapon_gem_slot_level_Size() const {return 2;};
char Pad_sub_9[2];
BnsTables::Shared::TableRef unseal_acquire_item[20];
__int32 unseal_acquire_item_Size() const {return 20;};
int unseal_acquire_item_tableId() const {return 202;};
BnsTables::Shared::TableRef unseal_consume_item2[4];
__int32 unseal_consume_item2_Size() const {return 4;};
int unseal_consume_item2_tableId() const {return 202;};
__int16 unseal_consume_item2_stack_count[4];
__int32 unseal_consume_item2_stack_count_Size() const {return 4;};
BnsTables::Shared::TableRef unseal_result_preview_item;
int unseal_result_preview_item_tableId() const {return 202;};
__int16 transform_add_probability;
bool transform_change_group;
char Pad_sub_10[1];
__int32 additional_growth_recipe_exp_diff;
__int32 additional_growth_recipe_exp_percent;
signed char additional_awakening_probability;
char Pad_sub_11[3];
BnsTables::Shared::TableRef randombox_preview;
int randombox_preview_tableId() const {return 316;};
signed char message_range;
char Pad_sub_12[3];
BnsTables::Shared::TableRef pet_food_recovery;
int pet_food_recovery_tableId() const {return 298;};
BnsTables::Shared::ExplicitTableRef exceptional_usable_attraction;
BnsTables::Shared::TableRef item_usable_group;
int item_usable_group_tableId() const {return 229;};
BnsTables::Shared::TableRef required_completion_quest;
int required_completion_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef skill_book_achievement_blademaster;
int skill_book_achievement_blademaster_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_kungfufighter;
int skill_book_achievement_kungfufighter_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_forcemaster;
int skill_book_achievement_forcemaster_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_shooter;
int skill_book_achievement_shooter_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_destroyer;
int skill_book_achievement_destroyer_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_summoner;
int skill_book_achievement_summoner_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_assassin;
int skill_book_achievement_assassin_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_swordmaster;
int skill_book_achievement_swordmaster_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_warlock;
int skill_book_achievement_warlock_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_soulfighter;
int skill_book_achievement_soulfighter_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_warrior;
int skill_book_achievement_warrior_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_archer;
int skill_book_achievement_archer_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_spear_master;
int skill_book_achievement_spear_master_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_thunderer;
int skill_book_achievement_thunderer_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_dual_blader;
int skill_book_achievement_dual_blader_tableId() const {return 6;};
BnsTables::Shared::TableRef skill_book_achievement_bard;
int skill_book_achievement_bard_tableId() const {return 6;};
BnsTables::Shared::TableRef fishing_paste;
int fishing_paste_tableId() const {return 155;};
__int16 secret_treasure_id;
char Pad_sub_13[2];
__int32 badge_gear_score;
__int32 badge_synthesis_score;
BnsTables::Shared::TableRef slate_scroll;
int slate_scroll_tableId() const {return 392;};
signed char fusion_target_category;
char Pad_sub_14[1];
__int16 fusion_score_factor;
signed char grocery_effect_type;
char Pad_sub_15[1];
__int16 grocery_effect_level;
BnsTables::Shared::TableRef card;
int card_tableId() const {return 463;};
__int16 use_fail_caster_flag;
char Pad_sub_16[2];
BnsTables::Shared::TableRef glyph_reward;
int glyph_reward_tableId() const {return 163;};
BnsTables::Shared::TableRef glyph_reward_fixed;
int glyph_reward_fixed_tableId() const {return 161;};
signed char grocery_batch_type;
char Pad_sub_17[3];
BnsTables::Shared::TableRef relic_symbol;
int relic_symbol_tableId() const {return 336;};
BnsTables::Shared::IconRef relic_image;
BnsTables::Shared::TableRef relic_main_option;
int relic_main_option_tableId() const {return 334;};
BnsTables::Shared::TableRef relic_sub_option;
int relic_sub_option_tableId() const {return 334;};
BnsTables::Shared::TableRef relic_bonus_1_option;
int relic_bonus_1_option_tableId() const {return 334;};
BnsTables::Shared::TableRef relic_bonus_2_option;
int relic_bonus_2_option_tableId() const {return 334;};
__int32 relic_synthesis_score;
BnsTables::Shared::TableRef relic_set_item;
int relic_set_item_tableId() const {return 335;};
BnsTables::Shared::TableRef relic_enhance_cost;
int relic_enhance_cost_tableId() const {return 333;};
signed char relic_enhance_max_count;
char Pad_sub_18[3];
BnsTables::Shared::TableRef character_membership;
int character_membership_tableId() const {return 54;};
__int32 character_membership_duration;
__int32 blue_virtual_currency_additional_quota;
__int16 lock_type;
__int16 lock_index;
BnsTables::Shared::TableRef skill_train_by_item_for_transmit;
int skill_train_by_item_for_transmit_tableId() const {return 380;};
BnsTables::Shared::TableRef decompose_random_box_replaced_by_decompose_item;
int decompose_random_box_replaced_by_decompose_item_tableId() const {return 202;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}