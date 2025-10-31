/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct attractionrewardsummary_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::ExplicitTableRef reward_item_common[24];
__int32 reward_item_common_Size() const {return 24;};
signed char reward_item_common_category[24];
__int32 reward_item_common_category_Size() const {return 24;};
signed char reward_item_common_condition_type[24];
__int32 reward_item_common_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_normal[24];
__int32 reward_item_normal_Size() const {return 24;};
signed char reward_item_normal_category[24];
__int32 reward_item_normal_category_Size() const {return 24;};
signed char reward_item_normal_condition_type[24];
__int32 reward_item_normal_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_hard[24];
__int32 reward_item_hard_Size() const {return 24;};
signed char reward_item_hard_category[24];
__int32 reward_item_hard_category_Size() const {return 24;};
signed char reward_item_hard_condition_type[24];
__int32 reward_item_hard_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef reward_item_easy[24];
__int32 reward_item_easy_Size() const {return 24;};
signed char reward_item_easy_category[24];
__int32 reward_item_easy_category_Size() const {return 24;};
signed char reward_item_easy_condition_type[24];
__int32 reward_item_easy_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef main_reward_item_normal[5];
__int32 main_reward_item_normal_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef main_reward_item_hard[5];
__int32 main_reward_item_hard_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef main_reward_item_easy[5];
__int32 main_reward_item_easy_Size() const {return 5;};
BnsTables::Shared::ExplicitTableRef additional_reward_item[24];
__int32 additional_reward_item_Size() const {return 24;};
signed char additional_reward_item_category[24];
__int32 additional_reward_item_category_Size() const {return 24;};
signed char additional_reward_item_condition_type[24];
__int32 additional_reward_item_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_common[24];
__int32 bonus_reward_item_common_Size() const {return 24;};
signed char bonus_reward_item_common_category[24];
__int32 bonus_reward_item_common_category_Size() const {return 24;};
signed char bonus_reward_item_common_condition_type[24];
__int32 bonus_reward_item_common_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_easy[24];
__int32 bonus_reward_item_easy_Size() const {return 24;};
signed char bonus_reward_item_easy_category[24];
__int32 bonus_reward_item_easy_category_Size() const {return 24;};
signed char bonus_reward_item_easy_condition_type[24];
__int32 bonus_reward_item_easy_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_normal[24];
__int32 bonus_reward_item_normal_Size() const {return 24;};
signed char bonus_reward_item_normal_category[24];
__int32 bonus_reward_item_normal_category_Size() const {return 24;};
signed char bonus_reward_item_normal_condition_type[24];
__int32 bonus_reward_item_normal_condition_type_Size() const {return 24;};
BnsTables::Shared::ExplicitTableRef bonus_reward_item_hard[24];
__int32 bonus_reward_item_hard_Size() const {return 24;};
signed char bonus_reward_item_hard_category[24];
__int32 bonus_reward_item_hard_category_Size() const {return 24;};
signed char bonus_reward_item_hard_condition_type[24];
__int32 bonus_reward_item_hard_condition_type_Size() const {return 24;};
signed char bonus_reward_difficulty_type[3];
__int32 bonus_reward_difficulty_type_Size() const {return 3;};
char Pad1[1];
BnsTables::Shared::TableRef bonus_reward_quota[3];
__int32 bonus_reward_quota_Size() const {return 3;};
int bonus_reward_quota_tableId() const {return 69;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 18; }
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

		enum class reward_item_hard_category {
			none = 0,
			costume = 1,
			weapon = 2,
			equip_gem = 3,
			accessory = 4,
			etc = 5,
		};

		enum class reward_item_hard_condition_type {
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

		enum class bonus_reward_difficulty_type {
			none = 0,
			easy = 1,
			normal = 2,
			hard = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attractionrewardsummary_RecordPtr // : DrRecordPtr
	{
		attractionrewardsummary_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}