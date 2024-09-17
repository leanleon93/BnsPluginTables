/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_weapon_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
__int8 weapon_type;
char Pad_sub_1[3];
wchar_t* equip_show;
__int16 default_gem_level;
__int16 max_gem_slot_level;
bool identify_enable;
char Pad_sub_2[3];
Data::TableRef identify_grocery;
int identify_grocery_tableId(){return 189;};
bool gem_slot_by_probability;
__int8 gem_slot_type[4];
char Pad_sub_3[3];
Data::TableRef open_gem_slot_grocery[8];
int open_gem_slot_grocery_tableId(){return 189;};
__int16 open_gem_slot_grocery_count[8];
__int32 open_gem_slot_price[8];
__int8 fixed_open_gem_slot;
__int8 max_gem_slot_count;
bool enchant_gem_slot_usable[2];
bool repairable;
char Pad_sub_4[1];
__int16 repair_level;
__int16 repair_item_count;
char Pad_sub_5[2];
Data::TableRef ui_repair_item;
int ui_repair_item_tableId(){return 189;};
bool gem_slot_expandable;
char Pad_sub_6[3];
Data::TableRef skill_by_equipment;
int skill_by_equipment_tableId(){return 330;};
__int8 weapon_appearance_change_type;
char Pad_sub_7[3];
Data::TableRef pet;
int pet_tableId(){return 274;};
__int32 closet_group_id;
Data::TableRef skill_skin;
int skill_skin_tableId(){return 344;};
__int16 hidden_power_attach;
char Pad_sub_8[2];
Data::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
bool weapon_appearance_job_change;
char Pad_sub_9[3];
Data::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId(){return 76;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}