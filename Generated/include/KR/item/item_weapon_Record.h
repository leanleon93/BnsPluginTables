/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_weapon_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
signed char weapon_type;
char Pad_sub_1[3];
wchar_t* equip_show;
__int16 default_gem_level;
__int16 max_gem_slot_level;
bool identify_enable;
char Pad_sub_2[3];
BnsTables::Shared::TableRef identify_grocery;
int identify_grocery_tableId() const {return 202;};
bool gem_slot_by_probability;
signed char gem_slot_type[4];
__int32 gem_slot_type_Size() const {return 4;};
char Pad_sub_3[3];
BnsTables::Shared::TableRef open_gem_slot_grocery[8];
__int32 open_gem_slot_grocery_Size() const {return 8;};
int open_gem_slot_grocery_tableId() const {return 202;};
__int16 open_gem_slot_grocery_count[8];
__int32 open_gem_slot_grocery_count_Size() const {return 8;};
__int32 open_gem_slot_price[8];
__int32 open_gem_slot_price_Size() const {return 8;};
signed char fixed_open_gem_slot;
signed char max_gem_slot_count;
bool enchant_gem_slot_usable[2];
__int32 enchant_gem_slot_usable_Size() const {return 2;};
bool repairable;
char Pad_sub_4[1];
__int16 repair_level;
__int16 repair_item_count;
char Pad_sub_5[2];
BnsTables::Shared::TableRef ui_repair_item;
int ui_repair_item_tableId() const {return 202;};
bool gem_slot_expandable;
char Pad_sub_6[3];
BnsTables::Shared::TableRef skill_by_equipment;
int skill_by_equipment_tableId() const {return 358;};
signed char weapon_appearance_change_type;
char Pad_sub_7[3];
BnsTables::Shared::TableRef pet;
int pet_tableId() const {return 298;};
__int32 closet_group_id;
BnsTables::Shared::TableRef skill_skin;
int skill_skin_tableId() const {return 372;};
__int16 hidden_power_attach;
char Pad_sub_8[2];
BnsTables::Shared::TableRef unseal_consume_item2[4];
__int32 unseal_consume_item2_Size() const {return 4;};
int unseal_consume_item2_tableId() const {return 202;};
__int16 unseal_consume_item2_stack_count[4];
__int32 unseal_consume_item2_stack_count_Size() const {return 4;};
bool weapon_appearance_job_change;
signed char soul_gem_slot_probability;
__int16 star_stone_slot_prop_weight[9];
__int32 star_stone_slot_prop_weight_Size() const {return 9;};
BnsTables::Shared::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId() const {return 79;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}