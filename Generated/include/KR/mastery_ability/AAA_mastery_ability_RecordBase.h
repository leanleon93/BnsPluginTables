/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mastery_ability_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;
__int16 mastery_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 max_hp;
__int64 max_guard_gauge;
__int16 max_sp;
__int16 modify_cast_speed_percent;
__int64 hp_regen;
__int64 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
char Pad0[2];
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
__int32 job_ability_1;
__int32 job_ability_2;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
char Pad5[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
char Pad6[2];
__int32 heal_power_modify;
__int32 aoe_defend_power_modify;
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
__int32 abnormal_attack_power_modify;
__int32 abnormal_defend_power_modify;
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
char Pad7[2];
__int32 attack_attribute_modify;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 268; }
		static __int32 SubType() { return -1; }
		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class job {
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_ability_RecordPtr // : DrRecordPtr
	{
		mastery_ability_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}