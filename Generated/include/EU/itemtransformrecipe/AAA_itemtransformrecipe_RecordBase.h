/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemtransformrecipe_Record : BnsTables::Shared::DrEl
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
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef upgrade_grocery;
int upgrade_grocery_tableId() const {return 229;};
signed char required_inven_capacity;
char Pad1[3];
__int32 money_cost;
BnsTables::Shared::ExplicitTableRef main_ingredient;
signed char main_ingredient_condition_type;
signed char main_ingredient_min_level;
__int16 main_ingredient_stack_count;
BnsTables::Shared::TableRef main_ingredient_title_name;
int main_ingredient_title_name_tableId() const {return 435;};
BnsTables::Shared::TableRef main_ingredient_title_item;
int main_ingredient_title_item_tableId() const {return 202;};
bool keep_main_ingredient_weapon_gem_slot;
bool keep_main_ingredient_weapon_appearance;
bool keep_main_ingredient_spirit;
bool consume_main_ingredient;
BnsTables::Shared::ExplicitTableRef sub_ingredient[7];
__int32 sub_ingredient_Size() const {return 7;};
signed char sub_ingredient_condition_type[7];
__int32 sub_ingredient_condition_type_Size() const {return 7;};
signed char sub_ingredient_min_level[7];
__int32 sub_ingredient_min_level_Size() const {return 7;};
__int16 sub_ingredient_stack_count[7];
__int32 sub_ingredient_stack_count_Size() const {return 7;};
BnsTables::Shared::TableRef sub_ingredient_title_name[7];
__int32 sub_ingredient_title_name_Size() const {return 7;};
int sub_ingredient_title_name_tableId() const {return 435;};
BnsTables::Shared::TableRef sub_ingredient_title_item[7];
__int32 sub_ingredient_title_item_Size() const {return 7;};
int sub_ingredient_title_item_tableId() const {return 202;};
bool consume_sub_ingredient;
char Pad2[3];
BnsTables::Shared::TableRef fixed_ingredient[8];
__int32 fixed_ingredient_Size() const {return 8;};
int fixed_ingredient_tableId() const {return 202;};
__int16 fixed_ingredient_stack_count[8];
__int32 fixed_ingredient_stack_count_Size() const {return 8;};
bool consume_fixed_ingredient;
signed char special_fixed_index;
bool enable_batch_transform;
bool is_fixed_result_recipe;
__int16 rare_item_success_probability;
char Pad3[2];
BnsTables::Shared::ExplicitTableRef rare_item[10];
__int32 rare_item_Size() const {return 10;};
signed char rare_item_total_count;
signed char rare_item_select_count;
__int16 rare_item_stack_count[10];
__int32 rare_item_stack_count_Size() const {return 10;};
__int16 normal_item_success_probability;
BnsTables::Shared::ExplicitTableRef normal_item[10];
__int32 normal_item_Size() const {return 10;};
signed char normal_item_total_count;
signed char normal_item_select_count;
__int16 normal_item_stack_count[10];
__int32 normal_item_stack_count_Size() const {return 10;};
char Pad4[2];
BnsTables::Shared::ExplicitTableRef premium_item[10];
__int32 premium_item_Size() const {return 10;};
signed char premium_item_total_count;
signed char premium_item_select_count;
__int16 premium_item_stack_count[10];
__int32 premium_item_stack_count_Size() const {return 10;};
__int16 random_item_success_probability;
BnsTables::Shared::ExplicitTableRef random_item[10];
__int32 random_item_Size() const {return 10;};
signed char random_item_total_count;
char Pad5[1];
__int16 random_item_select_prop_weight[10];
__int32 random_item_select_prop_weight_Size() const {return 10;};
bool random_failure_mileage_save;
char Pad6[1];
BnsTables::Shared::TableRef random_failure_mileage_distribution_type;
int random_failure_mileage_distribution_type_tableId() const {return 318;};
BnsTables::Shared::TableRef random_failure_mileage_influence_recipe[2];
__int32 random_failure_mileage_influence_recipe_Size() const {return 2;};
int random_failure_mileage_influence_recipe_tableId() const {return 226;};
BnsTables::Shared::TableRef random_retry_cost;
int random_retry_cost_tableId() const {return 228;};
signed char main_ingredient_weapon_gem_type;
char Pad7[1];
__int16 main_ingredient_weapon_gem_level;
signed char main_ingredient_weapon_gem_grade;
signed char sub_ingredient_weapon_gem_type[7];
__int32 sub_ingredient_weapon_gem_type_Size() const {return 7;};
__int16 sub_ingredient_weapon_gem_level[7];
__int32 sub_ingredient_weapon_gem_level_Size() const {return 7;};
signed char sub_ingredient_weapon_gem_grade[7];
__int32 sub_ingredient_weapon_gem_grade_Size() const {return 7;};
char Pad8[1];
__int16 weapon_gem_transform_fail_probability;
BnsTables::Shared::TableRef title_item;
int title_item_tableId() const {return 202;};
BnsTables::Shared::TableRef title_name;
int title_name_tableId() const {return 435;};
BnsTables::Shared::TableRef title_reward;
int title_reward_tableId() const {return 317;};
signed char upper_category;
signed char category;
bool use_random;
char Pad9[1];
BnsTables::Shared::TableRef fail_effect;
int fail_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 307;};
bool bm_ingredient_recipe;
signed char warning;
signed char event_index;
char Pad10[1];
__int32 recipe_score;
signed char recipe_series;
signed char definite_discount_minimum_value;
__int16 sort_no;
BnsTables::Shared::TableRef coupon_item;
int coupon_item_tableId() const {return 202;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 226; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};

		enum class sub_ingredient_condition_type {
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

		enum class sub_ingredient_weapon_gem_type {
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

		enum class upper_category {
			none = 0,
			general = 1,
			weapon_gem = 2,
			pet_gem = 3,
			event = 4,
		};

		enum class category {
			none = 0,
			event_1 = 1,
			event_2 = 2,
			event_3 = 3,
			event_4 = 4,
			event_5 = 5,
			event_6 = 6,
			event_7 = 7,
			event_8 = 8,
			event_9 = 9,
			event_10 = 10,
			material = 11,
			costume = 12,
			weapon = 13,
			legendary_weapon = 14,
			accessory = 15,
			weapon_gem_adder = 16,
			weapon_gem2 = 17,
			piece = 18,
			purification = 19,
			special = 20,
			pet = 21,
			pet_legend = 22,
			pet_change = 23,
			taiji_gem = 24,
			division = 25,
			weapon_enchant_gem = 26,
			sewing = 27,
			weapon_transform = 28,
			accessory_transform = 29,
			equip_gem = 30,
			card = 31,
			spirit = 32,
			etc = 33,
			pet_gem = 34,
			common_1 = 35,
			common_2 = 36,
			common_3 = 37,
			common_4 = 38,
			common_5 = 39,
		};

		enum class warning {
			none = 0,
			fail = 1,
			stuck = 2,
			gemslotreset = 3,
			fail_gemslotreset = 4,
			stuck_gemslotreset = 5,
			change = 6,
			lower = 7,
			lower_gemslotreset = 8,
			partialfail = 9,
			tradeimpossible = 10,
			delete_particle = 11,
			delete_design = 12,
			spiritreset = 13,
			fail_spiritreset = 14,
			gemslotreset_spiritreset = 15,
			fail_gemslotreset_spiritreset = 16,
			lower_spiritreset = 17,
			lower_gemslotreset_spiritreset = 18,
			partialfail_spiritreset = 19,
			cannot_division = 20,
			fail_cannot_division = 21,
		};

		enum class recipe_series {
			none = 0,
			normal_1 = 1,
			normal_2 = 2,
			normal_3 = 3,
			normal_4 = 4,
			normal_5 = 5,
			normal_6 = 6,
			normal_7 = 7,
			normal_8 = 8,
			normal_9 = 9,
			normal_11 = 10,
			normal_12 = 11,
			normal_13 = 12,
			normal_14 = 13,
			normal_15 = 14,
			normal_16 = 15,
			normal_17 = 16,
			normal_18 = 17,
			normal_19 = 18,
			normal_20 = 19,
			bm_1 = 20,
			bm_2 = 21,
			bm_3 = 22,
			bm_4 = 23,
			bm_5 = 24,
			bm_6 = 25,
			bm_7 = 26,
			bm_8 = 27,
			bm_9 = 28,
			bm_11 = 29,
			bm_12 = 30,
			bm_13 = 31,
			bm_14 = 32,
			bm_15 = 33,
			bm_16 = 34,
			bm_17 = 35,
			bm_18 = 36,
			bm_19 = 37,
			bm_20 = 38,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformrecipe_RecordPtr // : DrRecordPtr
	{
		itemtransformrecipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}