/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct season_ability_goal_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char ability;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char scale[10];
__int32 scale_Size() const {return 10;};
char Pad0[2];
__int32 value[10];
__int32 value_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 345; }
		static __int32 SubType() { return -1; }
		enum class ability {
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
			max_hp = 10,
			defend_power_creature_value = 11,
			pve_boss_level_npc_defend_power_creature_value = 12,
			pvp_defend_power_creature_value = 13,
			defend_dodge_value = 14,
			defend_parry_value = 15,
			defend_critical_value = 16,
			defend_critical_damage_value = 17,
			hp_regen = 18,
			heal_power_value = 19,
			abnormal_defend_power_value = 20,
			attack_stiff_duration_value = 21,
			defend_stiff_duration_value = 22,
			attack_concentrate_value = 23,
			aoe_defend_power_value = 24,
			hate_power_creature_value = 25,
			attack_damage_modify_diff = 26,
			defend_damage_modify_diff = 27,
			attack_abnormal_hit_value = 28,
			defend_abnormal_resistance_value = 29,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) season_ability_goal_RecordPtr // : DrRecordPtr
	{
		season_ability_goal_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}