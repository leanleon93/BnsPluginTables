/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_accessory_Record : item_Record
	{
	public:
		__int8 accessory_type;
char Pad_sub_0[3];
BnsTables::Shared::TableRef necessary_costume;
int necessary_costume_tableId(){return 195;};
BnsTables::Shared::TableRef necessary_costume_brand;
int necessary_costume_brand_tableId(){return 189;};
bool cannot_equip_identical_pairs;
bool guild_used;
char Pad_sub_1[2];
__int32 closet_group_id;
BnsTables::Shared::TableRef talk_social;
int talk_social_tableId(){return 414;};
BnsTables::Shared::TableRef skill3;
int skill3_tableId(){return 337;};
__int8 custom_dress_design_state;
char Pad_sub_2[1];
__int16 hidden_power_attach;
BnsTables::Shared::TableRef vehicle_detail;
int vehicle_detail_tableId(){return 435;};
BnsTables::Shared::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 195;};
__int16 unseal_consume_item2_stack_count[4];
BnsTables::Shared::IconRef chat_ui_icon;
wchar_t* thumbnail_frame_fx;
BnsTables::Shared::TableRef appearance_item;
int appearance_item_tableId(){return 11;};
bool enchant_gem_slot_usable[3];
char Pad_sub_3[1];
__int16 star_stone_slot_prop_weight[9];
char Pad_sub_4[2];
BnsTables::Shared::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId(){return 77;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}