/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pc_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;
__int16 level;
signed char contents_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
__int64 id;
signed char sex;
char Pad1[1];
__int16 radius;
BnsTables::Shared::TableRef skill[40];
__int32 skill_Size() const {return 40;};
int skill_tableId() const {return 362;};
BnsTables::Shared::TableRef skill3[40];
__int32 skill3_Size() const {return 40;};
int skill3_tableId() const {return 349;};
BnsTables::Shared::TableRef pc_skill3[2];
__int32 pc_skill3_Size() const {return 2;};
int pc_skill3_tableId() const {return 294;};
BnsTables::Shared::TableRef pc_job_style_skill3[10];
__int32 pc_job_style_skill3_Size() const {return 10;};
int pc_job_style_skill3_tableId() const {return 294;};
signed char skill_build_up_level_max;
char Pad2[1];
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
char Pad3[2];
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
char Pad4[2];
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
char Pad5[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad6[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad7[2];
__int32 job_ability_1;
__int32 job_ability_2;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 hate_base_percent;
__int16 hate_power_creature_value;
char Pad8[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
char Pad9[2];
__int32 abnormal_attack_power_modify;
__int32 abnormal_defend_power_modify;
__int32 hate_power_modify;
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
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
char Pad10[2];
__int32 attack_attribute_modify;
__int32 attack_abnormal_hit_base_percent;
__int32 attack_abnormal_hit_value;
__int32 attack_abnormal_hit_equip_value;
__int32 defend_abnormal_resistance_base_percent;
__int32 defend_abnormal_resistance_value;
__int32 defend_abnormal_resistance_equip_value;
__int32 attack_abnormal_hit_modify;
__int32 defend_abnormal_resistance_modify;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 290; }
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

		enum class contents_type {
			invalid = 0,
			normal = 1,
			duel = 2,
			dungeon = 3,
			battle_royal = 4,
		};

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

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_RecordPtr // : DrRecordPtr
	{
		pc_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}