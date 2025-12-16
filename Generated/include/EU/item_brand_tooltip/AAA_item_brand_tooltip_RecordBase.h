/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_brand_tooltip_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 brand_id;
signed char item_condition_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
__int16 game_category_3;
signed char item_grade;
signed char equip_level;
signed char equip_mastery_level;
signed char equip_job_check[4];
__int32 equip_job_check_Size() const {return 4;};
signed char equip_sex;
signed char equip_race;
signed char equip_solo_duel_grade;
signed char equip_team_duel_grade;
char Pad0[3];
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef tag_icon;
BnsTables::Shared::IconRef tag_icon_grade;
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 435;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 435;};
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
BnsTables::Shared::TableRef store_description;
int store_description_tableId() const {return 435;};
BnsTables::Shared::TableRef title_item;
int title_item_tableId() const {return 202;};
bool show_related_item;
char Pad1[3];
BnsTables::Shared::TableRef related_item[30];
__int32 related_item_Size() const {return 30;};
int related_item_tableId() const {return 202;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 196; }
		static __int32 SubType() { return -1; }
		enum class item_condition_type {
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_brand_tooltip_RecordPtr // : DrRecordPtr
	{
		item_brand_tooltip_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}