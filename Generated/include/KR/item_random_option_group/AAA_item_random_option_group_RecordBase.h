/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_random_option_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef effect_list;
int effect_list_tableId(){return 117;};
BnsTables::Shared::TableRef ability_list[3];
int ability_list_tableId(){return 1;};
__int8 ability_list_total_count;
char Pad0[3];
BnsTables::Shared::TableRef skill_build_up_group_list[3];
int skill_build_up_group_list_tableId(){return 342;};
__int8 skill_build_up_group_list_total_count;
char Pad1[3];
BnsTables::Shared::TableRef skill_train_by_item_list[6];
int skill_train_by_item_list_tableId(){return 367;};
__int8 skill_train_by_item_list_total_count;
__int8 skill_train_by_item_list_select_min;
__int8 skill_train_by_item_list_select_max;
char Pad2[1];
BnsTables::Shared::TableRef skill_train_by_item_list_title;
int skill_train_by_item_list_title_tableId(){return 420;};
bool duplication_enable;
bool unlimited_draw;
__int8 draw_enable_count;
char Pad3[1];
__int32 draw_cost_money[4];
__int8 draw_cost_total_count;
char Pad4[3];
BnsTables::Shared::TableRef draw_cost_main_item[4];
int draw_cost_main_item_tableId(){return 195;};
__int16 draw_cost_main_item_count[4];
BnsTables::Shared::TableRef draw_cost_sub_item_1[6];
int draw_cost_sub_item_1_tableId(){return 195;};
__int16 draw_cost_sub_item_count_1[6];
BnsTables::Shared::TableRef draw_cost_sub_item_2[6];
int draw_cost_sub_item_2_tableId(){return 195;};
__int16 draw_cost_sub_item_count_2[6];
BnsTables::Shared::TableRef draw_cost_sub_item_3[6];
int draw_cost_sub_item_3_tableId(){return 195;};
__int16 draw_cost_sub_item_count_3[6];
BnsTables::Shared::TableRef draw_cost_sub_item_4[6];
int draw_cost_sub_item_4_tableId(){return 195;};
__int16 draw_cost_sub_item_count_4[6];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 1); }
		static __int16 TableId() { return 212; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_option_group_RecordPtr // : DrRecordPtr
	{
		item_random_option_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_random_option_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}