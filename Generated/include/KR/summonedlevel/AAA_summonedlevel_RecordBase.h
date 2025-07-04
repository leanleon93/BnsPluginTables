/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct summonedlevel_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;
__int16 level;
signed char contents_type;
bool is_duelbot_summoned;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 max_hp;
__int16 modify_cast_speed_percent;
char Pad0[2];
__int64 hp_regen;
__int32 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
__int32 defend_critical_value;
__int16 defend_bounce_percent;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_reduce_percent;
__int16 defend_parry_reduce_diff;
__int16 defend_perfect_parry_base_percent;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 defend_immune_base_percent;
char Pad1[2];
__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int32 attack_power_equip_min;
__int32 attack_power_equip_max;
__int32 defend_power_creature_value;
__int32 defend_power_equip_value;
__int16 defend_resist_power_creature_value;
__int16 defend_resist_power_equip_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
char Pad2[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad3[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad4[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
char Pad5[2];
__int32 attack_hit_value_modify;
__int32 attack_critical_value_modify;
__int32 defend_critical_value_modify;
__int32 defend_dodge_value_modify;
__int32 defend_parry_value_modify;
__int32 defend_physical_value_modify;
__int32 defend_force_value_modify;
__int32 attack_stiff_duration_value_modify;
__int32 defend_stiff_duration_value_modify;
__int32 cast_duration_value_modify;
__int32 attack_critical_damage_modify;
__int32 defend_critical_damage_modify;
__int32 attack_pierce_modify;
__int32 attack_parry_pierce_modify;
__int32 defend_parry_reduce_modify;
__int32 attack_perfect_parry_damage_modify;
__int32 defend_perfect_parry_reduce_modify;
__int32 attack_counter_damage_modify;
__int32 defend_counter_reduce_modify;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 hate_base_percent;
__int16 hate_power_creature_value;
char Pad6[2];
__int32 abnormal_attack_power_modify;
__int32 abnormal_defend_power_modify;
__int32 hate_power_modify;
__int32 heal_power_modify;
__int32 aoe_defend_power_modify;
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
char Pad7[2];
__int32 attack_attribute_modify;
__int16 summon_ability_rate_attack_power_creature_min;
__int16 summon_ability_rate_attack_power_creature_max;
__int16 summon_ability_rate_defend_power_creature_value;
__int16 summon_ability_rate_pve_boss_level_npc_attack_power_equip_min;
__int16 summon_ability_rate_pve_boss_level_npc_attack_power_equip_max;
__int16 summon_ability_rate_pve_boss_level_npc_defend_power_equip_value;
__int16 summon_ability_rate_pvp_attack_power_equip_min;
__int16 summon_ability_rate_pvp_attack_power_equip_max;
__int16 summon_ability_rate_pvp_defend_power_equip_value;
__int16 summon_ability_rate_defend_resist_power_creature_value;
__int16 summon_ability_rate_attack_hit_base_percent;
__int16 summon_ability_rate_attack_hit_value;
__int16 summon_ability_rate_attack_pierce_value;
__int16 summon_ability_rate_attack_critical_base_percent;
__int16 summon_ability_rate_attack_critical_value;
__int16 summon_ability_rate_attack_critical_damage_value;
__int16 summon_ability_rate_defend_critical_base_percent;
__int16 summon_ability_rate_defend_critical_value;
__int16 summon_ability_rate_defend_dodge_base_percent;
__int16 summon_ability_rate_defend_dodge_value;
__int16 summon_ability_rate_defend_parry_base_percent;
__int16 summon_ability_rate_defend_parry_value;
__int16 summon_ability_rate_attack_stiff_duration_base_percent;
__int16 summon_ability_rate_attack_stiff_duration_value;
__int16 summon_ability_rate_defend_stiff_duration_base_percent;
__int16 summon_ability_rate_defend_stiff_duration_value;
__int16 summon_ability_rate_cast_duration_base_percent;
__int16 summon_ability_rate_cast_duration_value;
__int16 summon_ability_rate_defend_physical_damage_reduce_percent;
__int16 summon_ability_rate_defend_force_damage_reduce_percent;
__int16 summon_ability_rate_attack_damage_modify_percent;
__int16 summon_ability_rate_attack_damage_modify_diff;
__int16 summon_ability_rate_defend_damage_modify_percent;
__int16 summon_ability_rate_defend_damage_modify_diff;
__int32 summon_ability_rate_max_hp;
__int32 summon_ability_rate_hp_regen;
__int32 summon_ability_rate_hp_regen_combat;
__int16 summon_ability_rate_abnormal_attack_base_percent;
__int16 summon_ability_rate_abnormal_attack_power_value;
__int16 summon_ability_rate_abnormal_defend_base_percent;
__int16 summon_ability_rate_abnormal_defend_power_value;
__int16 summon_ability_rate_attack_attribute_value;
__int16 summon_ability_rate_attack_attribute_base_percent;
__int16 defend_critical_damage_value;
char Pad8[2];
__int32 attack_abnormal_hit_modify;
__int32 defend_abnormal_resistance_modify;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 420; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedlevel_RecordPtr // : DrRecordPtr
	{
		summonedlevel_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}