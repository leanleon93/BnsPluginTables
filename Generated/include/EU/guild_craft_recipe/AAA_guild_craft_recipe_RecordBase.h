/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guild_craft_recipe_Record : BnsTables::Shared::DrEl
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
signed char craft_type;
signed char required_guild_level;
char Pad0[2];
BnsTables::Shared::TableRef required_faction;
int required_faction_tableId() const {return 139;};
signed char production_type[7];
__int32 production_type_Size() const {return 7;};
char Pad1[1];
__int16 production_type_required_exp[7];
__int32 production_type_required_exp_Size() const {return 7;};
signed char production_type_required_pc_count[7];
__int32 production_type_required_pc_count_Size() const {return 7;};
char Pad2[3];
__int32 contract_money;
BnsTables::Shared::TableRef contract_item[5];
__int32 contract_item_Size() const {return 5;};
int contract_item_tableId() const {return 202;};
__int16 contract_item_count[5];
__int32 contract_item_count_Size() const {return 5;};
char Pad3[2];
BnsTables::Shared::TableRef contract_bm_item;
int contract_bm_item_tableId() const {return 202;};
__int16 contract_bm_item_count;
char Pad4[2];
BnsTables::Shared::TableRef rent_bm_item;
int rent_bm_item_tableId() const {return 202;};
__int16 rent_bm_item_count;
char Pad5[2];
BnsTables::Shared::TableRef material[15];
__int32 material_Size() const {return 15;};
int material_tableId() const {return 202;};
__int16 material_count[15];
__int32 material_count_Size() const {return 15;};
__int16 material_donation_point[15];
__int32 material_donation_point_Size() const {return 15;};
BnsTables::Shared::TableRef brand_material[3];
__int32 brand_material_Size() const {return 3;};
int brand_material_tableId() const {return 195;};
signed char brand_material_condition_type[3];
__int32 brand_material_condition_type_Size() const {return 3;};
char Pad6[1];
__int16 brand_material_count[3];
__int32 brand_material_count_Size() const {return 3;};
__int16 brand_material_donation_point[3];
__int32 brand_material_donation_point_Size() const {return 3;};
__int32 time_cost;
BnsTables::Shared::TableRef result;
int result_tableId() const {return 202;};
__int16 result_count;
signed char result_bonus_guildlevel;
char Pad7[1];
__int16 result_bonus_count;
signed char result_receive_type;
signed char use_state;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 174; }
		static __int32 SubType() { return -1; }
		enum class craft_type {
			none = 0,
			small = 1,
			big = 2,
		};

		enum class production_type {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};

		enum class brand_material_condition_type {
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

		enum class result_receive_type {
			authorized = 0,
			specified = 1,
		};

		enum class use_state {
			none = 0,
			no_more_use = 1,
			in_use = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_craft_recipe_RecordPtr // : DrRecordPtr
	{
		guild_craft_recipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}