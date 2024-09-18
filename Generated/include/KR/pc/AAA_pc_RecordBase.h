/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pc_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int16 level;
__int8 contents_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 id;
__int8 sex;
char Pad0[1];
__int16 radius;
BnsTables::Shared::TableRef skill[40];
int skill_tableId(){return 348;};
BnsTables::Shared::TableRef skill3[40];
int skill3_tableId(){return 337;};
BnsTables::Shared::TableRef pc_skill3[2];
int pc_skill3_tableId(){return 282;};
BnsTables::Shared::TableRef pc_job_style_skill3[10];
int pc_job_style_skill3_tableId(){return 282;};
__int8 skill_build_up_level_max;
char Pad1[1];
__int16 skill_build_up_point;
__int64 max_hp;
__int16 speed;
__int16 modify_cast_speed_percent;
__int64 hp_regen;
__int32 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
char Pad2[2];
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
char Pad3[2];
__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int32 defend_power_creature_value;
__int32 defend_power_equip_value;
__int16 defend_resist_power_creature_value;
__int16 defend_resist_power_equip_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
char Pad4[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad5[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad6[2];
__int32 job_ability_1;
__int32 job_ability_2;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 hate_base_percent;
__int16 hate_power_creature_value;
char Pad7[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
__int16 abnormal_attack_power_modify;
__int16 abnormal_defend_power_modify;
__int16 hate_power_modify;
__int16 heal_power_modify;
__int16 aoe_defend_power_modify;
__int16 attack_hit_value_modify;
__int16 attack_critical_value_modify;
__int16 defend_critical_value_modify;
__int16 defend_dodge_value_modify;
__int16 defend_parry_value_modify;
__int16 defend_physical_value_modify;
__int16 defend_force_value_modify;
__int16 attack_stiff_duration_value_modify;
__int16 defend_stiff_duration_value_modify;
__int16 cast_duration_value_modify;
__int16 attack_critical_damage_modify;
__int16 defend_critical_damage_modify;
__int16 attack_pierce_modify;
__int16 attack_parry_pierce_modify;
__int16 defend_parry_reduce_modify;
__int16 attack_perfect_parry_damage_modify;
__int16 defend_perfect_parry_reduce_modify;
__int16 attack_counter_damage_modify;
__int16 defend_counter_reduce_modify;
char Pad8[2];
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
__int16 attack_attribute_modify;
__int16 attack_pierce_base_percent;
__int16 defend_critical_damage_percent;
__int32 defend_strength_creature_value;
__int32 attack_precise_creature_value;
__int16 attack_aoe_pierce_value;
__int16 attack_abnormal_hit_base_percent;
__int16 attack_abnormal_hit_value;
__int16 defend_abnormal_dodge_base_percent;
__int16 defend_abnormal_dodge_value;
__int16 support_power_base_percent;
__int16 support_power_value;
char Pad9[2];
__int32 heal_power_value;
__int16 hypermove_power_value;
__int16 r_attack_aoe_pierce_modify;
__int16 r_attack_abnormal_hit_modify;
__int16 r_defend_abnormal_dodge_modify;
__int16 r_support_power_modify;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 278; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_RecordPtr // : DrRecordPtr
	{
		pc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}