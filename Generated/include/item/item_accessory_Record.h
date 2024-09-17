/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_accessory_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
__int8 accessory_type;
char Pad_sub_1[3];
Data::TableRef necessary_costume;
int necessary_costume_tableId(){return 189;};
Data::TableRef necessary_costume_brand;
int necessary_costume_brand_tableId(){return 183;};
bool cannot_equip_identical_pairs;
bool guild_used;
char Pad_sub_2[2];
__int32 closet_group_id;
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};
Data::TableRef skill3;
int skill3_tableId(){return 324;};
__int8 custom_dress_design_state;
char Pad_sub_3[1];
__int16 hidden_power_attach;
Data::TableRef vehicle_detail;
int vehicle_detail_tableId(){return 420;};
Data::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
Data::IconRef chat_ui_icon;
wchar_t* thumbnail_frame_fx;
Data::TableRef appearance_item;
int appearance_item_tableId(){return 11;};
bool enchant_gem_slot_usable[3];
char Pad_sub_4[1];
Data::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId(){return 76;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}