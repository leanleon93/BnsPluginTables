/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct formula_constant_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 dodge_percent;
__int16 critical_percent;
__int16 defend_percent;
__int16 parry_percent;
__int16 perfect_parry_constant;
__int16 counter_constant;
__int16 hit_percent;
__int16 attribute_percent;
__int16 abnormal_attack_percent;
__int16 abnormal_attack_rate_min_permile;
__int16 abnormal_defend_percent;
__int16 hate_power_percent;
__int16 critical_damage_rate_min_permile;
__int16 attribute_damage_rate_min_permile;
__int16 max_hp_support_percent;
__int16 speed_support_percent;
__int16 attack_pierce_value_support_percent;
__int16 attack_concentrate_value_support_percent;
__int16 attack_critical_base_percent_support_percent;
__int16 attack_critical_damage_percent_support_percent;
__int16 attack_critical_value_support_percent;
__int16 attack_critical_damage_value_support_percent;
__int16 defend_critical_base_percent_support_percent;
__int16 defend_critical_value_support_percent;
__int16 defend_parry_value_support_percent;
__int16 defend_perfect_parry_reduce_percent_support_percent;
__int16 defend_counter_reduce_percent_support_percent;
__int16 attack_power_creature_min_support_percent;
__int16 attack_power_creature_max_support_percent;
__int16 defend_power_creature_value_support_percent;
__int16 defend_physical_damage_reduce_percent_support_percent;
__int16 attack_stiff_duration_base_percent_support_percent;
__int16 attack_stiff_duration_value_support_percent;
__int16 defend_stiff_duration_base_percent_support_percent;
__int16 defend_stiff_duration_value_support_percent;
__int16 aoe_defend_base_percent_support_percent;
__int16 aoe_defend_power_value_support_percent;
__int16 hate_base_percent_support_percent;
__int16 hate_power_creature_value_support_percent;
__int16 abnormal_attack_power_value_support_percent;
__int16 abnormal_attack_base_percent_support_percent;
__int16 heal_power_value_support_percent;
__int16 max_guard_gauge_support_percent;
__int16 defend_strength_creature_value_support_percent;
__int16 attack_precise_creature_value_support_percent;
__int16 attack_pierce_base_percent_support_percent;
__int16 attack_aoe_pierce_value_support_percent;
__int16 defend_critical_damage_percent_support_percent;
__int16 attack_abnormal_hit_base_percent_support_percent;
__int16 attack_abnormal_hit_value_support_percent;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 149; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) formula_constant_RecordPtr // : DrRecordPtr
	{
		formula_constant_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::formula_constant_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}