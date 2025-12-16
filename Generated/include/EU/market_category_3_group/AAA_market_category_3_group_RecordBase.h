/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct market_category_3_group_Record : BnsTables::Shared::DrEl
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
bool visible;
char Pad0[1];
__int16 market_category_3[10];
__int32 market_category_3_Size() const {return 10;};
signed char addtional_filtering_type;
char Pad1[1];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 261; }
		static __int32 SubType() { return -1; }
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

		enum class addtional_filtering_type {
			none = 0,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) market_category_3_group_RecordPtr // : DrRecordPtr
	{
		market_category_3_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}