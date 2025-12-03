/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_improve_set_bonus_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name;
int name_tableId() const {return 438;};
BnsTables::Shared::ExplicitTableRef target_item[20];
__int32 target_item_Size() const {return 20;};
signed char target_item_condition_type[20];
__int32 target_item_condition_type_Size() const {return 20;};
signed char target_equip_pos[20];
__int32 target_equip_pos_Size() const {return 20;};
BnsTables::Shared::IconRef target_equip_pos_icon[20];
__int32 target_equip_pos_icon_Size() const {return 20;};
signed char min_item_grade;
char Pad0[1];
__int16 total_improve_level[30];
__int32 total_improve_level_Size() const {return 30;};
char Pad1[2];
BnsTables::Shared::TableRef total_improve_level_effect[30];
__int32 total_improve_level_effect_Size() const {return 30;};
int total_improve_level_effect_tableId() const {return 119;};
BnsTables::Shared::TableRef total_improve_level_effect_description[30];
__int32 total_improve_level_effect_description_Size() const {return 30;};
int total_improve_level_effect_description_tableId() const {return 438;};
signed char total_improve_level_ability[30];
__int32 total_improve_level_ability_Size() const {return 30;};
char Pad2[2];
__int32 total_improve_level_ability_value[30];
__int32 total_improve_level_ability_value_Size() const {return 30;};
__int32 total_improve_level_ability_base_value[30];
__int32 total_improve_level_ability_base_value_Size() const {return 30;};
BnsTables::Shared::TableRef total_improve_level_condition_event[30];
__int32 total_improve_level_condition_event_Size() const {return 30;};
int total_improve_level_condition_event_tableId() const {return 65;};
__int16 min_improve_level[30];
__int32 min_improve_level_Size() const {return 30;};
BnsTables::Shared::TableRef min_improve_level_effect[30];
__int32 min_improve_level_effect_Size() const {return 30;};
int min_improve_level_effect_tableId() const {return 119;};
BnsTables::Shared::TableRef min_improve_level_effect_description[30];
__int32 min_improve_level_effect_description_Size() const {return 30;};
int min_improve_level_effect_description_tableId() const {return 438;};
signed char min_improve_level_ability[30];
__int32 min_improve_level_ability_Size() const {return 30;};
char Pad3[2];
__int32 min_improve_level_ability_value[30];
__int32 min_improve_level_ability_value_Size() const {return 30;};
__int32 min_improve_level_ability_base_value[30];
__int32 min_improve_level_ability_base_value_Size() const {return 30;};
BnsTables::Shared::TableRef min_improve_level_condition_event[30];
__int32 min_improve_level_condition_event_Size() const {return 30;};
int min_improve_level_condition_event_tableId() const {return 65;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 215; }
		static __int32 SubType() { return -1; }
		enum class target_item_condition_type {
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

		enum class target_equip_pos {
			none = 0,
			hand = 1,
			body = 2,
			ear = 3,
			eye = 4,
			head = 5,
			finger = 6,
			neck = 7,
			gem_1 = 8,
			gem_2 = 9,
			gem_3 = 10,
			gem_4 = 11,
			gem_5 = 12,
			gem_6 = 13,
			gem_7 = 14,
			gem_8 = 15,
			wrist = 16,
			waist = 17,
			body_attach = 18,
			summoned_body = 19,
			summoned_head = 20,
			summoned_attach = 21,
			soul = 22,
			preset_gem_1 = 23,
			preset_gem_2 = 24,
			preset_gem_3 = 25,
			preset_gem_4 = 26,
			preset_gem_5 = 27,
			preset_gem_6 = 28,
			preset_gem_7 = 29,
			preset_gem_8 = 30,
			soul_2 = 31,
			gloves = 32,
			pet_1 = 33,
			pet_2 = 34,
			rune_1 = 35,
			rune_2 = 36,
			nova = 37,
			vehicle = 38,
			preset_hand = 39,
			preset_ear = 40,
			preset_finger = 41,
			preset_neck = 42,
			preset_wrist = 43,
			preset_waist = 44,
			preset_soul = 45,
			preset_soul_2 = 46,
			preset_gloves = 47,
			preset_pet_1 = 48,
			preset_pet_2 = 49,
			preset_rune_1 = 50,
			preset_rune_2 = 51,
			preset_nova = 52,
			preset_vehicle = 53,
			normal_state_appearance = 54,
			idle_state_appearance = 55,
			chatting_symbol = 56,
			portrait_appearance = 57,
			hypermove_appearance = 58,
			hand_appearance = 59,
			pet_1_appearance = 60,
			name_plate_appearance = 61,
			speech_bubble_appearance = 62,
			talk_social = 63,
			armlet_1 = 64,
			armlet_2 = 65,
			preset_armlet_1 = 66,
			preset_armlet_2 = 67,
		};

		enum class min_improve_level_ability {
			none = 0,
			attack_power_creature_min_max = 1,
			pve_boss_level_npc_attack_power_creature_min_max = 2,
			pvp_attack_power_creature_min_max = 3,
			attack_hit_value = 4,
			attack_critical_value = 5,
			attack_critical_damage_value = 6,
			attack_attribute_value = 7,
			attack_pierce_value = 8,
			abnormal_attack_power_value = 9,
			race_type_1_attack_damage_modify_percent = 10,
			race_type_2_attack_damage_modify_percent = 11,
			race_type_3_attack_damage_modify_percent = 12,
			race_type_4_attack_damage_modify_percent = 13,
			race_type_5_attack_damage_modify_percent = 14,
			race_type_6_attack_damage_modify_percent = 15,
			race_type_7_attack_damage_modify_percent = 16,
			attribute_type_1_attack_damage_modify_percent = 17,
			attribute_type_2_attack_damage_modify_percent = 18,
			attribute_type_3_attack_damage_modify_percent = 19,
			attribute_type_4_attack_damage_modify_percent = 20,
			attribute_type_5_attack_damage_modify_percent = 21,
			attribute_type_6_attack_damage_modify_percent = 22,
			attribute_type_7_attack_damage_modify_percent = 23,
			attribute_type_8_attack_damage_modify_percent = 24,
			attribute_type_9_attack_damage_modify_percent = 25,
			attribute_type_10_attack_damage_modify_percent = 26,
			attribute_type_11_attack_damage_modify_percent = 27,
			attribute_type_12_attack_damage_modify_percent = 28,
			max_hp = 29,
			defend_power_creature_value = 30,
			pve_boss_level_npc_defend_power_creature_value = 31,
			pvp_defend_power_creature_value = 32,
			defend_dodge_value = 33,
			defend_parry_value = 34,
			defend_critical_value = 35,
			hp_regen = 36,
			heal_power_value = 37,
			abnormal_defend_power_value = 38,
			race_type_1_defend_damage_modify_percent = 39,
			race_type_2_defend_damage_modify_percent = 40,
			race_type_3_defend_damage_modify_percent = 41,
			race_type_4_defend_damage_modify_percent = 42,
			race_type_5_defend_damage_modify_percent = 43,
			race_type_6_defend_damage_modify_percent = 44,
			race_type_7_defend_damage_modify_percent = 45,
			attribute_type_1_defend_damage_modify_percent = 46,
			attribute_type_2_defend_damage_modify_percent = 47,
			attribute_type_3_defend_damage_modify_percent = 48,
			attribute_type_4_defend_damage_modify_percent = 49,
			attribute_type_5_defend_damage_modify_percent = 50,
			attribute_type_6_defend_damage_modify_percent = 51,
			attribute_type_7_defend_damage_modify_percent = 52,
			attribute_type_8_defend_damage_modify_percent = 53,
			attribute_type_9_defend_damage_modify_percent = 54,
			attribute_type_10_defend_damage_modify_percent = 55,
			attribute_type_11_defend_damage_modify_percent = 56,
			attribute_type_12_defend_damage_modify_percent = 57,
			r_attack_stiff_duration_value = 58,
			r_defend_stiff_duration_value = 59,
			r_attack_concentrate_value = 60,
			r_aoe_defend_power_value = 61,
			r_defend_strength_creature_value = 62,
			r_attack_precise_creature_value = 63,
			r_attack_aoe_pierce_value = 64,
			r_attack_abnormal_hit_value = 65,
			r_defend_abnormal_dodge_value = 66,
			r_support_power_value = 67,
			defend_critical_damage_value = 68,
			attack_attribute_base_percent = 69,
			attack_critical_damage_percent = 70,
			attack_damage_modify_percent = 71,
			attack_critical_base_percent = 72,
			attack_abnormal_hit_value = 73,
			defend_abnormal_resistance_value = 74,
			additional_exp_diff_by_kill = 75,
			additional_exp_percent_by_kill = 76,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_set_bonus_RecordPtr // : DrRecordPtr
	{
		item_improve_set_bonus_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}