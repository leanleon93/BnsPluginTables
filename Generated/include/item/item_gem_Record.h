/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_gem_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
__int8 gem_type;
__int8 weapon_gem_type;
__int16 weapon_gem_level;
bool cannot_transform;
char Pad_sub_1[3];
Data::IconRef extra_icon;
Data::IconRef extra_icon_grade;
__int8 weapon_enchant_gem_slot_type;
__int8 accessory_enchant_gem_equip_accessory_type;
__int8 accessory_enchant_gem_slot_type;
char Pad_sub_2[1];
Data::TableRef reveal_consumable_item[4];
int reveal_consumable_item_tableId(){return 189;};
__int8 reveal_consumable_item_count[4];
Data::TableRef equip_gem_piece[4];
int equip_gem_piece_tableId(){return 119;};
Data::TableRef attach_equip_gem_piece_consumable_item[4];
int attach_equip_gem_piece_consumable_item_tableId(){return 189;};
__int16 attach_equip_gem_piece_consumable_item_count[4];
__int32 attach_equip_gem_piece_money_cost;
Data::TableRef attach_equip_gem_piece[10];
int attach_equip_gem_piece_tableId(){return 119;};
__int16 attach_equip_gem_piece_prop_weight[10];
__int8 attach_equip_gem_piece_primary_gem_equip_level_min;
__int8 attach_equip_gem_piece_primary_gem_equip_level_max;
char Pad_sub_3[2];
Data::TableRef attack_effect[2];
int attack_effect_tableId(){return 111;};
__int8 attack_effect_skill_result;
__int8 attack_effect_probability;
__int8 attack_effect_target_limit_level;
char Pad_sub_4[1];
__int16 attack_effect_target_effect_flag[4];
__int16 attack_effect_caster_effect_flag[4];
Data::TableRef second_attack_effect[2];
int second_attack_effect_tableId(){return 111;};
__int8 second_attack_effect_skill_result;
__int8 second_attack_effect_probability;
__int8 second_attack_effect_target_limit_level;
char Pad_sub_5[1];
__int16 second_attack_effect_target_effect_flag[4];
__int16 second_attack_effect_caster_effect_flag[4];
__int32 detach_gem_money_cost;
Data::TableRef main_ability_fixed;
int main_ability_fixed_tableId(){return 205;};
Data::TableRef sub_ability_fixed;
int sub_ability_fixed_tableId(){return 205;};
__int8 sub_ability_random_count;
char Pad_sub_6[3];
Data::TableRef sub_ability_random[8];
int sub_ability_random_tableId(){return 205;};
Data::TableRef feed_ability_random[8];
int feed_ability_random_tableId(){return 205;};
__int8 feed_ability_random_count;
char Pad_sub_7[3];
__int32 ability_feeding_required_money;
Data::TableRef ability_feeding_required_item[2];
int ability_feeding_required_item_tableId(){return 189;};
__int16 ability_feeding_required_item_count[2];
Data::TableRef ability_feeding_special_item;
int ability_feeding_special_item_tableId(){return 189;};
__int16 ability_feeding_special_item_count;
char Pad_sub_8[2];
Data::TableRef ability_feeding_target[2];
int ability_feeding_target_tableId(){return 183;};
Data::TableRef skill_by_equipment;
int skill_by_equipment_tableId(){return 330;};
__int16 hidden_power_attach;
char Pad_sub_9[2];
Data::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
Data::TableRef skill3;
int skill3_tableId(){return 324;};
wchar_t* equip_show;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}