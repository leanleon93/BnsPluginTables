/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct craft_case_recipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef group_alias;
int group_alias_tableId() const {return 83;};
signed char case_option;
char Pad1[3];
__int32 craft_duration;
signed char use_state;
char Pad2[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};
BnsTables::Shared::TableRef requirement_name;
int requirement_name_tableId() const {return 435;};
BnsTables::Shared::TableRef location_desc;
int location_desc_tableId() const {return 435;};
__int16 required_craft_exp;
char Pad3[2];
__int32 required_achievement_id;
__int16 required_achievement_step_min;
char Pad4[2];
__int32 cost_money;
BnsTables::Shared::ExplicitTableRef cost_material[8];
__int32 cost_material_Size() const {return 8;};
signed char cost_material_condition_type[8];
__int32 cost_material_condition_type_Size() const {return 8;};
__int16 cost_material_amount[8];
__int32 cost_material_amount_Size() const {return 8;};
__int16 reward_craft_exp;
__int16 half_craft_exp_step;
__int16 zero_craft_exp_step;
__int16 reward_craft_bonus_exp;
__int16 half_craft_bonus_exp_step;
__int16 zero_craft_bonus_exp_step;
BnsTables::Shared::TableRef reward_item[5];
__int32 reward_item_Size() const {return 5;};
int reward_item_tableId() const {return 202;};
__int32 reward_item_min[5];
__int32 reward_item_min_Size() const {return 5;};
__int32 reward_item_max[5];
__int32 reward_item_max_Size() const {return 5;};
__int32 reward_item_reference[5];
__int32 reward_item_reference_Size() const {return 5;};
BnsTables::Shared::TableRef reward_item_random_distribution[5];
__int32 reward_item_random_distribution_Size() const {return 5;};
int reward_item_random_distribution_tableId() const {return 318;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 81; }
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

		enum class use_state {
			invalid_state = 0,
			no_more_use = 1,
			in_use = 2,
		};

		enum class cost_material_condition_type {
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_case_recipe_RecordPtr // : DrRecordPtr
	{
		craft_case_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}