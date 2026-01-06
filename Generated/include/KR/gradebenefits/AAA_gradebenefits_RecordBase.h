/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct gradebenefits_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char benefit_type;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 game_grade_key;
__int64 value;
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 118;};
wchar_t* string_value;
bool enable_in_arena_duel;
char Pad0[3];
BnsTables::Shared::TableRef achievement[4];
__int32 achievement_Size() const {return 4;};
int achievement_tableId() const {return 6;};
wchar_t* icon_image_set;
wchar_t* name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 1); }
		static __int16 TableId() { return 168; }
		static __int32 SubType() { return -1; }
		enum class benefit_type {
			none = 0,
			restoration_time = 1,
			nameplate_icon = 2,
			nameplate_icon2 = 3,
			use_nameplate_font = 4,
			use_hypermove_special_effect = 5,
			use_hypermove_special_effect2 = 6,
			broadcast_reserved_7 = 7,
			broadcast_reserved_8 = 8,
			effect_1 = 9,
			effect_2 = 10,
			effect_3 = 11,
			effect_4 = 12,
			effect_5 = 13,
			effect_6 = 14,
			effect_7 = 15,
			effect_8 = 16,
			achievement_1 = 17,
			achievement_2 = 18,
			achievement_3 = 19,
			achievement_4 = 20,
			achievement_5 = 21,
			max_vitality2_bonus = 22,
			quest_reward_money_bonus = 23,
			unlocated_store = 24,
			unlocated_warehouse = 25,
			closet = 26,
			auction_escrow = 27,
			concurrent_sale_count_bonus = 28,
			accumulated_sale_count_bonus = 29,
			market_register_amount_tax_discount_rate = 30,
			money_market_concurrent_sale_count_bonus = 31,
			money_market_accumulated_sale_count_bonus = 32,
			weapon_accessory_transform_money_cost_discount_rate = 33,
			weapon_gem_transform_money_cost_discount_rate = 34,
			weapon_repair_item_count_discount_rate = 35,
			item_awakening_money_cost_discount_rate = 36,
			random_store_prob_group = 37,
			npc_looting_money_reward_percent = 38,
			npc_looting_money_reward_percent_bonus = 39,
			detach_weapon_gem_money_cost_discount_rate = 40,
			ingameshop_daily_free_purchase = 41,
			ingameshop_discount = 42,
			purify_item_discount_rate = 43,
			membership_mileage = 44,
			daily_or_attraction_quest_reward_exp_bonus_percent = 45,
			game_mileage_bonus_percent = 46,
			weapon_appearance_change_cost_money_discount_percent = 47,
			production_exp_bonus_percent = 48,
			teleport_limit_time_decrease_second = 49,
			additional_unlocated_store = 50,
			duel_point_bonus_percent = 51,
			party_battle_point_bonus_percent = 52,
			field_play_point_bonus_percent = 53,
			duel_exp_bonus_percent = 54,
			party_battle_exp_bonus_percent = 55,
			daily_game_cash = 56,
			membership_only_product_purchase = 57,
			premium_depository = 58,
			quest_reward_hongmoon = 59,
			quest_reward_membership = 60,
			quest_reward_account_exp_bonus_percent = 61,
			tendency_quest_reward_account_exp_bonus_percent = 62,
			challenge_reward_account_exp_bonus_percent = 63,
			challenge_reward_money_bonus_percent = 64,
			apply_min_energy_point_multiple_value = 65,
			item_improve_money_cost_discount_rate = 66,
			consume_depository = 67,
			pet_gem_transform_money_cost_discount_rate = 68,
			item_combination_cost_discount_rate = 69,
			draw_option_cost_discount_rate = 70,
			etc_benefits = 71,
			external_daily_membership_mileage = 72,
			fatigability_reduction_rate = 73,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gradebenefits_RecordPtr // : DrRecordPtr
	{
		gradebenefits_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}