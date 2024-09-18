/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct item_costume_Record : item_Record
	{
	public:
		char Pad_sub_0[3];
bool guild_used;
char Pad_sub_1[3];
__int32 closet_group_id;
BnsTables::Shared::TableRef talk_social;
int talk_social_tableId(){return 399;};
BnsTables::Shared::TableRef pair_costume;
int pair_costume_tableId(){return 189;};
BnsTables::Shared::TableRef pair_costume_brand;
int pair_costume_brand_tableId(){return 183;};
wchar_t* pair_costume_signal_show;
wchar_t* pair_costume_signal_detach_show;
__int8 custom_dress_design_state;
char Pad_sub_2[3];
BnsTables::Shared::TableRef skill_skin;
int skill_skin_tableId(){return 344;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}