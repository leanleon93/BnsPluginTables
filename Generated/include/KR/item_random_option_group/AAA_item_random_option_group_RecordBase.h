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
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef effect_list;
int effect_list_tableId() const {return 120;};
BnsTables::Shared::TableRef ability_list[3];
__int32 ability_list_Size() const {return 3;};
int ability_list_tableId() const {return 1;};
signed char ability_list_total_count;
char Pad1[3];
BnsTables::Shared::TableRef skill_build_up_group_list[3];
__int32 skill_build_up_group_list_Size() const {return 3;};
int skill_build_up_group_list_tableId() const {return 357;};
signed char skill_build_up_group_list_total_count;
char Pad2[3];
BnsTables::Shared::TableRef skill_train_by_item_list[6];
__int32 skill_train_by_item_list_Size() const {return 6;};
int skill_train_by_item_list_tableId() const {return 382;};
signed char skill_train_by_item_list_total_count;
signed char skill_train_by_item_list_select_min;
signed char skill_train_by_item_list_select_max;
char Pad3[1];
BnsTables::Shared::TableRef skill_train_by_item_list_title;
int skill_train_by_item_list_title_tableId() const {return 435;};
bool duplication_enable;
bool unlimited_draw;
signed char draw_enable_count;
char Pad4[1];
__int32 draw_cost_money[4];
__int32 draw_cost_money_Size() const {return 4;};
signed char draw_cost_total_count;
char Pad5[3];
BnsTables::Shared::TableRef draw_cost_main_item[4];
__int32 draw_cost_main_item_Size() const {return 4;};
int draw_cost_main_item_tableId() const {return 202;};
__int16 draw_cost_main_item_count[4];
__int32 draw_cost_main_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef draw_cost_sub_item_1[6];
__int32 draw_cost_sub_item_1_Size() const {return 6;};
int draw_cost_sub_item_1_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_1[6];
__int32 draw_cost_sub_item_count_1_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_2[6];
__int32 draw_cost_sub_item_2_Size() const {return 6;};
int draw_cost_sub_item_2_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_2[6];
__int32 draw_cost_sub_item_count_2_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_3[6];
__int32 draw_cost_sub_item_3_Size() const {return 6;};
int draw_cost_sub_item_3_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_3[6];
__int32 draw_cost_sub_item_count_3_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_4[6];
__int32 draw_cost_sub_item_4_Size() const {return 6;};
int draw_cost_sub_item_4_tableId() const {return 202;};
__int16 draw_cost_sub_item_count_4[6];
__int32 draw_cost_sub_item_count_4_Size() const {return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(9, 0); }
		static __int16 TableId() { return 219; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_option_group_RecordPtr // : DrRecordPtr
	{
		item_random_option_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}