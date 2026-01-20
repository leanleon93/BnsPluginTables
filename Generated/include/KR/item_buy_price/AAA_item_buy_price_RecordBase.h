/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_buy_price_Record : BnsTables::Shared::DrEl
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
__int32 money;
BnsTables::Shared::TableRef required_itembrand;
int required_itembrand_tableId() const {return 197;};
signed char required_itembrand_condition_type;
char Pad1[3];
BnsTables::Shared::TableRef required_item[4];
__int32 required_item_Size() const {return 4;};
int required_item_tableId() const {return 204;};
__int16 required_item_count[4];
__int32 required_item_count_Size() const {return 4;};
__int32 required_faction_score;
__int32 required_duel_point;
__int32 required_party_battle_point;
__int32 required_field_play_point;
__int32 required_life_contents_point;
__int32 required_achievement_score;
__int32 required_achievement_id;
__int16 required_achievement_step_min;
__int16 faction_level;
signed char check_solo_duel_grade;
signed char check_team_duel_grade;
signed char check_battle_field_grade_occupation_war;
signed char check_battle_field_grade_capture_the_flag;
signed char check_battle_field_grade_lead_the_ball;
char Pad2[1];
__int16 check_closet_collecting_grade;
BnsTables::Shared::TableRef check_content_quota;
int check_content_quota_tableId() const {return 69;};
__int32 check_soul_boost_season_bm;
signed char required_level;
signed char required_mastery_level;
__int16 required_account_level;
__int64 start_time;
__int64 end_time;
signed char item_slot_display_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 199; }
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

		enum class required_itembrand_condition_type {
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

		enum class item_slot_display_type {
			none = 0,
			recommanded = 1,
			new_val = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_buy_price_RecordPtr // : DrRecordPtr
	{
		item_buy_price_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}