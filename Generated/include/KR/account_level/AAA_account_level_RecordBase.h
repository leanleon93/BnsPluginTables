/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct account_level_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
__int64 exp;
signed char ability[8];
__int32 ability_Size() const {return 8;};
__int32 ability_value[8];
__int32 ability_value_Size() const {return 8;};
__int32 ability_base_value[8];
__int32 ability_base_value_Size() const {return 8;};
signed char badge_slot_quota_category1_premium;
signed char badge_slot_quota_category1_normal;
signed char badge_slot_quota_category2_premium;
signed char badge_slot_quota_category2_normal;
signed char badge_slot_quota_category3_premium;
signed char badge_slot_quota_category3_normal;
signed char badge_page;
signed char badge_inventory_size;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 4; }
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
	struct __declspec(align(4)) account_level_RecordPtr // : DrRecordPtr
	{
		account_level_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}