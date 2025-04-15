/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct item_gem_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
signed char gem_type;
signed char weapon_gem_type;
__int16 weapon_gem_level;
bool cannot_transform;
char Pad_sub_1[3];
BnsTables::Shared::IconRef extra_icon;
BnsTables::Shared::IconRef extra_icon_grade;
signed char weapon_enchant_gem_slot_type;
signed char accessory_enchant_gem_equip_accessory_type;
signed char accessory_enchant_gem_slot_type;
char Pad_sub_2[1];
BnsTables::Shared::TableRef reveal_consumable_item[4];
__int32 reveal_consumable_item_Size() const {return 4;};
int reveal_consumable_item_tableId() const {return 198;};
signed char reveal_consumable_item_count[4];
__int32 reveal_consumable_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef equip_gem_piece[4];
__int32 equip_gem_piece_Size() const {return 4;};
int equip_gem_piece_tableId() const {return 123;};
BnsTables::Shared::TableRef attach_equip_gem_piece_consumable_item[4];
__int32 attach_equip_gem_piece_consumable_item_Size() const {return 4;};
int attach_equip_gem_piece_consumable_item_tableId() const {return 198;};
__int16 attach_equip_gem_piece_consumable_item_count[4];
__int32 attach_equip_gem_piece_consumable_item_count_Size() const {return 4;};
__int32 attach_equip_gem_piece_money_cost;
BnsTables::Shared::TableRef attach_equip_gem_piece[10];
__int32 attach_equip_gem_piece_Size() const {return 10;};
int attach_equip_gem_piece_tableId() const {return 123;};
__int16 attach_equip_gem_piece_prop_weight[10];
__int32 attach_equip_gem_piece_prop_weight_Size() const {return 10;};
__int32 attach_equip_gem_piece_total_prop_weight;
signed char attach_equip_gem_piece_primary_gem_equip_level_min;
signed char attach_equip_gem_piece_primary_gem_equip_level_max;
char Pad_sub_3[2];
BnsTables::Shared::TableRef attack_effect[2];
__int32 attack_effect_Size() const {return 2;};
int attack_effect_tableId() const {return 115;};
signed char attack_effect_skill_result;
signed char attack_effect_probability;
signed char attack_effect_target_limit_level;
char Pad_sub_4[1];
__int16 attack_effect_target_effect_flag[4];
__int32 attack_effect_target_effect_flag_Size() const {return 4;};
__int16 attack_effect_caster_effect_flag[4];
__int32 attack_effect_caster_effect_flag_Size() const {return 4;};
BnsTables::Shared::TableRef second_attack_effect[2];
__int32 second_attack_effect_Size() const {return 2;};
int second_attack_effect_tableId() const {return 115;};
signed char second_attack_effect_skill_result;
signed char second_attack_effect_probability;
signed char second_attack_effect_target_limit_level;
char Pad_sub_5[1];
__int16 second_attack_effect_target_effect_flag[4];
__int32 second_attack_effect_target_effect_flag_Size() const {return 4;};
__int16 second_attack_effect_caster_effect_flag[4];
__int32 second_attack_effect_caster_effect_flag_Size() const {return 4;};
__int32 detach_gem_money_cost;
BnsTables::Shared::TableRef main_ability_fixed;
int main_ability_fixed_tableId() const {return 214;};
BnsTables::Shared::TableRef sub_ability_fixed;
int sub_ability_fixed_tableId() const {return 214;};
signed char sub_ability_random_count;
char Pad_sub_6[3];
BnsTables::Shared::TableRef sub_ability_random[8];
__int32 sub_ability_random_Size() const {return 8;};
int sub_ability_random_tableId() const {return 214;};
BnsTables::Shared::TableRef feed_ability_random[8];
__int32 feed_ability_random_Size() const {return 8;};
int feed_ability_random_tableId() const {return 214;};
signed char feed_ability_random_count;
char Pad_sub_7[3];
__int32 ability_feeding_required_money;
BnsTables::Shared::TableRef ability_feeding_required_item[2];
__int32 ability_feeding_required_item_Size() const {return 2;};
int ability_feeding_required_item_tableId() const {return 198;};
__int16 ability_feeding_required_item_count[2];
__int32 ability_feeding_required_item_count_Size() const {return 2;};
BnsTables::Shared::TableRef ability_feeding_special_item;
int ability_feeding_special_item_tableId() const {return 198;};
__int16 ability_feeding_special_item_count;
char Pad_sub_8[2];
BnsTables::Shared::TableRef ability_feeding_target[2];
__int32 ability_feeding_target_Size() const {return 2;};
int ability_feeding_target_tableId() const {return 191;};
BnsTables::Shared::TableRef skill_by_equipment;
int skill_by_equipment_tableId() const {return 350;};
__int16 hidden_power_attach;
char Pad_sub_9[2];
BnsTables::Shared::TableRef unseal_consume_item2[4];
__int32 unseal_consume_item2_Size() const {return 4;};
int unseal_consume_item2_tableId() const {return 198;};
__int16 unseal_consume_item2_stack_count[4];
__int32 unseal_consume_item2_stack_count_Size() const {return 4;};
BnsTables::Shared::TableRef skill3;
int skill3_tableId() const {return 342;};
wchar_t* equip_show;
bool sub_ability_random_draw_enable;
char Pad_sub_10[3];
BnsTables::Shared::TableRef sub_ability_random_draw_cost[8];
__int32 sub_ability_random_draw_cost_Size() const {return 8;};
int sub_ability_random_draw_cost_tableId() const {return 77;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}