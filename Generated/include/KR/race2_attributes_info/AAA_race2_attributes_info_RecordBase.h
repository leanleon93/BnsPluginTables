/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct race2_attributes_info_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char main_type_race2;
signed char main_type_attributes;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef main_type_name;
int main_type_name_tableId() const {return 435;};
wchar_t* main_type_icon;
signed char attack_type;
char Pad0[3];
BnsTables::Shared::TableRef attack_type_name;
int attack_type_name_tableId() const {return 435;};
wchar_t* attack_type_icon;
signed char defend_type;
char Pad1[3];
BnsTables::Shared::TableRef defend_type_name;
int defend_type_name_tableId() const {return 435;};
wchar_t* defend_type_icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 312; }
		static __int32 SubType() { return -1; }
		enum class main_type_race2 {
			none = 0,
			race1 = 1,
			race2 = 2,
			race3 = 3,
			race4 = 4,
			race5 = 5,
			race6 = 6,
			race7 = 7,
		};

		enum class main_type_attributes {
			none = 0,
			attribute1 = 1,
			attribute2 = 2,
			attribute3 = 3,
			attribute4 = 4,
			attribute5 = 5,
			attribute6 = 6,
			attribute7 = 7,
			attribute8 = 8,
			attribute9 = 9,
			attribute10 = 10,
			attribute11 = 11,
			attribute12 = 12,
		};

		enum class attack_type {
			none = 0,
			attack_power_equip_min_and_max = 1,
			defend_power_equip_value = 2,
			defend_resist_power_equip_value = 3,
			attack_hit_base_percent = 4,
			attack_hit_value = 5,
			attack_critical_base_percent = 6,
			attack_critical_value = 7,
			defend_critical_base_percent = 8,
			defend_critical_value = 9,
			defend_dodge_base_percent = 10,
			defend_dodge_value = 11,
			defend_parry_base_percent = 12,
			defend_parry_value = 13,
			attack_stiff_duration_base_percent = 14,
			attack_stiff_duration_value = 15,
			defend_stiff_duration_base_percent = 16,
			defend_stiff_duration_value = 17,
			cast_duration_base_percent = 18,
			cast_duration_value = 19,
			defend_physical_damage_reduce_percent = 20,
			defend_force_damage_reduce_percent = 21,
			attack_damage_modify_percent = 22,
			attack_damage_modify_diff = 23,
			defend_damage_modify_percent = 24,
			defend_damage_modify_diff = 25,
			max_hp = 26,
			hp_regen = 27,
			hp_regen_combat = 28,
			attack_pierce_value = 29,
			attack_concentrate_value = 30,
			defend_perfect_parry_reduce_percent = 31,
			defend_counter_reduce_percent = 32,
			attack_critical_damage_percent = 33,
			pve_boss_level_npc_attack_power_equip_min_and_max = 34,
			pve_boss_level_npc_defend_power_equip_value = 35,
			pvp_attack_power_equip_min_and_max = 36,
			pvp_defend_power_equip_value = 37,
			attack_critical_damage_value = 38,
			max_guard_gauge = 39,
			attack_attribute_value = 40,
			r_attack_stiff_duration_equip_value = 41,
			r_defend_stiff_duration_equip_value = 42,
			r_aoe_defend_power_value_equip = 43,
			r_heal_power_equip_value = 44,
			r_defend_strength_equip_value = 45,
			r_attack_precise_equip_value = 46,
			r_attack_aoe_pierce_value_equip = 47,
			r_attack_abnormal_hit_equip_value = 48,
			r_defend_abnormal_dodge_equip_value = 49,
			r_support_power_equip_value = 50,
			r_hypermove_power_equip_value = 51,
			attack_attribute_base_percent = 52,
			defend_difficulty_type_damage_reduce_percent = 53,
			attack_attribute_value_equip = 54,
			abnormal_attack_power_value_equip = 55,
			abnormal_defend_power_value = 56,
			heal_power_value = 57,
			attack_critical_damage_value_equip = 58,
			attack_pierce_base_percent = 59,
			abnormal_attack_base_percent = 60,
			abnormal_attack_power_value = 61,
			abnormal_defend_base_percent = 62,
			heal_power_base_percent = 63,
			race_type_1_attack_damage_modify_percent = 64,
			race_type_2_attack_damage_modify_percent = 65,
			race_type_3_attack_damage_modify_percent = 66,
			race_type_4_attack_damage_modify_percent = 67,
			race_type_5_attack_damage_modify_percent = 68,
			race_type_6_attack_damage_modify_percent = 69,
			race_type_7_attack_damage_modify_percent = 70,
			race_type_1_defend_damage_modify_percent = 71,
			race_type_2_defend_damage_modify_percent = 72,
			race_type_3_defend_damage_modify_percent = 73,
			race_type_4_defend_damage_modify_percent = 74,
			race_type_5_defend_damage_modify_percent = 75,
			race_type_6_defend_damage_modify_percent = 76,
			race_type_7_defend_damage_modify_percent = 77,
			attribute_type_1_attack_damage_modify_percent = 78,
			attribute_type_2_attack_damage_modify_percent = 79,
			attribute_type_3_attack_damage_modify_percent = 80,
			attribute_type_4_attack_damage_modify_percent = 81,
			attribute_type_5_attack_damage_modify_percent = 82,
			attribute_type_6_attack_damage_modify_percent = 83,
			attribute_type_7_attack_damage_modify_percent = 84,
			attribute_type_8_attack_damage_modify_percent = 85,
			attribute_type_9_attack_damage_modify_percent = 86,
			attribute_type_10_attack_damage_modify_percent = 87,
			attribute_type_11_attack_damage_modify_percent = 88,
			attribute_type_12_attack_damage_modify_percent = 89,
			attribute_type_1_defend_damage_modify_percent = 90,
			attribute_type_2_defend_damage_modify_percent = 91,
			attribute_type_3_defend_damage_modify_percent = 92,
			attribute_type_4_defend_damage_modify_percent = 93,
			attribute_type_5_defend_damage_modify_percent = 94,
			attribute_type_6_defend_damage_modify_percent = 95,
			attribute_type_7_defend_damage_modify_percent = 96,
			attribute_type_8_defend_damage_modify_percent = 97,
			attribute_type_9_defend_damage_modify_percent = 98,
			attribute_type_10_defend_damage_modify_percent = 99,
			attribute_type_11_defend_damage_modify_percent = 100,
			attribute_type_12_defend_damage_modify_percent = 101,
			defend_critical_damage_value = 102,
			defend_critical_damage_value_equip = 103,
			attack_parry_pierce_percent = 104,
			defend_critical_damage_percent = 105,
			job_ability_1 = 106,
			job_ability_2 = 107,
			heal_power_diff = 108,
			aoe_defend_base_percent = 109,
			aoe_defend_power_value = 110,
			hate_power_equip_value = 111,
			additional_exp_diff_by_kill = 112,
			additional_exp_percent_by_kill = 113,
			attack_abnormal_hit_equip_value = 114,
			defend_abnormal_resistance_equip_value = 115,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race2_attributes_info_RecordPtr // : DrRecordPtr
	{
		race2_attributes_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}