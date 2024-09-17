/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_item_ability_Record : effect_Record
	{
	public:
		__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int16 defend_power_equip_value;
__int16 defend_resist_power_equip_value;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_hit_value_equip;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_pierce_value_equip;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int16 attack_critical_value;
__int16 attack_critical_value_equip;
__int16 attack_critical_damage_value;
__int16 attack_critical_damage_value_equip;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
char Pad_sub_0[2];
__int32 defend_critical_value;
__int32 defend_critical_value_equip;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_dodge_value_equip;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_value_equip;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
__int16 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
__int16 defend_damage_modify_diff;
__int32 max_hp;
__int32 max_hp_equip;
__int32 max_guard_gauge;
__int32 max_guard_gauge_equip;
__int32 hp_regen;
__int32 hp_regen_equip;
__int32 hp_regen_combat;
__int32 hp_regen_combat_equip;
__int32 job_ability_1;
__int16 job_ability_2;
__int16 heal_power_base_percent;
__int16 heal_power_value;
char Pad_sub_1[2];
__int32 heal_power_diff;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 abnormal_attack_base_percent;
char Pad_sub_2[2];
__int32 abnormal_attack_power_value;
__int32 abnormal_attack_power_value_equip;
__int16 abnormal_defend_base_percent;
__int16 abnormal_defend_power_value;
__int16 hate_power_equip_value;
__int16 additional_exp_diff_by_kill;
__int16 additional_exp_percent_by_kill;
__int16 attack_concentrate_value;
__int16 attack_concentrate_value_equip;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 attack_attribute_value;
__int16 attack_attribute_value_equip;
__int16 attack_attribute_base_percent;
__int16 pve_boss_level_npc_attack_power_equip_min;
__int16 pve_boss_level_npc_attack_power_equip_max;
__int16 pve_boss_level_npc_defend_power_equip_value;
__int16 pvp_attack_power_equip_min;
__int16 pvp_attack_power_equip_max;
__int16 pvp_defend_power_equip_value;
__int16 r_attack_stiff_duration_equip_value;
__int16 r_defend_stiff_duration_equip_value;
__int16 r_aoe_defend_power_value_equip;
__int16 r_heal_power_equip_value;
__int32 r_defend_strength_equip_value;
__int32 r_attack_precise_equip_value;
__int16 r_attack_aoe_pierce_value_equip;
__int16 r_attack_abnormal_hit_equip_value;
__int16 r_defend_abnormal_dodge_equip_value;
__int16 r_support_power_equip_value;
__int16 r_hypermove_power_equip_value;
__int16 defend_difficulty_type_damage_reduce_percent;

		static __int32 SubType() { return 851; }
	};
#pragma pack(pop)
}