/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct item_grocery_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
__int8 grocery_type;
char Pad_sub_1[1];
__int16 stack_count;
__int16 store_bundle_count;
char Pad_sub_2[2];
BnsTables::Shared::TableRef skill3;
int skill3_tableId(){return 324;};
BnsTables::Shared::TableRef duel_skill3;
int duel_skill3_tableId(){return 324;};
__int8 skill_limit_level;
__int8 skill_limit_level_max;
__int8 skill_limit_mastery_level;
__int8 skill_limit_mastery_level_max;
__int8 skill_limit_job;
char Pad_sub_3[3];
BnsTables::Shared::TableRef skill_limit_faction;
int skill_limit_faction_tableId(){return 130;};
__int16 skill_limit_faction_level;
char Pad_sub_4[2];
BnsTables::Shared::TableRef skill_limit_activated_faction;
int skill_limit_activated_faction_tableId(){return 130;};
__int8 recharge_heart_type;
bool disable_vitality_zero;
bool disable_vitality_none_zero;
char Pad_sub_5[1];
__int32 skill_score_point;
BnsTables::Shared::TableRef skill_skin_acquire;
int skill_skin_acquire_tableId(){return 344;};
BnsTables::Shared::TableRef resurrect_effect;
int resurrect_effect_tableId(){return 111;};
__int32 bonus_exp;
__int32 bonus_mastery_exp;
__int32 bonus_account_exp;
__int32 bonus_sealed_dungeon_exp;
BnsTables::Shared::TableRef bonus_sealed_dungeon_id;
int bonus_sealed_dungeon_id_tableId(){return 110;};
__int32 energy_multiple_point;
__int16 additional_mastery_stat_point;
__int16 skill_build_up_point;
__int32 soul_boost_season_id;
__int32 soul_boost_item_point;
bool consume_by_skill;
char Pad_sub_6[1];
__int16 repair_level_min;
__int16 repair_level_max;
char Pad_sub_7[2];
__int32 repair_duration;
__int8 repair_grade;
bool necessary_campfire;
char Pad_sub_8[2];
BnsTables::Shared::TableRef valid_attraction_name;
int valid_attraction_name_tableId(){return 405;};
BnsTables::Shared::TableRef dest_zone;
int dest_zone_tableId(){return 443;};
__int8 expand_weapon_gem_slot_level[2];
char Pad_sub_9[2];
BnsTables::Shared::TableRef unseal_acquire_item[20];
int unseal_acquire_item_tableId(){return 189;};
BnsTables::Shared::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
BnsTables::Shared::TableRef unseal_result_preview_item;
int unseal_result_preview_item_tableId(){return 189;};
__int16 transform_add_probability;
bool transform_change_group;
char Pad_sub_10[1];
__int32 additional_growth_recipe_exp_diff;
__int32 additional_growth_recipe_exp_percent;
__int8 additional_awakening_probability;
char Pad_sub_11[3];
BnsTables::Shared::TableRef randombox_preview;
int randombox_preview_tableId(){return 290;};
__int8 message_range;
char Pad_sub_12[3];
BnsTables::Shared::TableRef pet_food_recovery;
int pet_food_recovery_tableId(){return 275;};
BnsTables::Shared::ExplicitTableRef exceptional_usable_attraction;
BnsTables::Shared::TableRef item_usable_group;
int item_usable_group_tableId(){return 215;};
BnsTables::Shared::TableRef required_completion_quest;
int required_completion_quest_tableId(){return 283;};
BnsTables::Shared::TableRef skill_book_achievement_blademaster;
int skill_book_achievement_blademaster_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_kungfufighter;
int skill_book_achievement_kungfufighter_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_forcemaster;
int skill_book_achievement_forcemaster_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_shooter;
int skill_book_achievement_shooter_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_destroyer;
int skill_book_achievement_destroyer_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_summoner;
int skill_book_achievement_summoner_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_assassin;
int skill_book_achievement_assassin_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_swordmaster;
int skill_book_achievement_swordmaster_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_warlock;
int skill_book_achievement_warlock_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_soulfighter;
int skill_book_achievement_soulfighter_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_warrior;
int skill_book_achievement_warrior_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_archer;
int skill_book_achievement_archer_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_spear_master;
int skill_book_achievement_spear_master_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_thunderer;
int skill_book_achievement_thunderer_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_dual_blader;
int skill_book_achievement_dual_blader_tableId(){return 6;};
BnsTables::Shared::TableRef skill_book_achievement_bard;
int skill_book_achievement_bard_tableId(){return 6;};
BnsTables::Shared::TableRef fishing_paste;
int fishing_paste_tableId(){return 146;};
__int16 secret_treasure_id;
char Pad_sub_13[2];
__int32 badge_gear_score;
__int32 badge_synthesis_score;
BnsTables::Shared::TableRef slate_scroll;
int slate_scroll_tableId(){return 364;};
__int8 fusion_target_category;
char Pad_sub_14[1];
__int16 fusion_score_factor;
__int8 grocery_effect_type;
char Pad_sub_15[1];
__int16 grocery_effect_level;
BnsTables::Shared::TableRef card;
int card_tableId(){return 433;};
__int16 use_fail_caster_flag;
char Pad_sub_16[2];
BnsTables::Shared::TableRef glyph_reward;
int glyph_reward_tableId(){return 155;};
BnsTables::Shared::TableRef glyph_reward_fixed;
int glyph_reward_fixed_tableId(){return 153;};
__int8 grocery_batch_type;
char Pad_sub_17[3];
BnsTables::Shared::TableRef relic_symbol;
int relic_symbol_tableId(){return 310;};
BnsTables::Shared::IconRef relic_image;
BnsTables::Shared::TableRef relic_main_option;
int relic_main_option_tableId(){return 308;};
BnsTables::Shared::TableRef relic_sub_option;
int relic_sub_option_tableId(){return 308;};
BnsTables::Shared::TableRef relic_bonus_1_option;
int relic_bonus_1_option_tableId(){return 308;};
BnsTables::Shared::TableRef relic_bonus_2_option;
int relic_bonus_2_option_tableId(){return 308;};
__int32 relic_synthesis_score;
BnsTables::Shared::TableRef relic_set_item;
int relic_set_item_tableId(){return 309;};
BnsTables::Shared::TableRef relic_enhance_cost;
int relic_enhance_cost_tableId(){return 307;};
__int8 relic_enhance_max_count;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}