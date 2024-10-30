/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_improve_option_list_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef option[50];
__int32 option_Size() const {return 50;};
int option_tableId() const {return 205;};
__int16 option_weight[50];
__int32 option_weight_Size() const {return 50;};
__int32 option_weight_total;
__int32 draw_cost_money[4];
__int32 draw_cost_money_Size() const {return 4;};
BnsTables::Shared::TableRef draw_cost_main_item[4];
__int32 draw_cost_main_item_Size() const {return 4;};
int draw_cost_main_item_tableId() const {return 195;};
__int16 draw_cost_main_item_count[4];
__int32 draw_cost_main_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef draw_cost_sub_item_1[6];
__int32 draw_cost_sub_item_1_Size() const {return 6;};
int draw_cost_sub_item_1_tableId() const {return 195;};
__int16 draw_cost_sub_item_count_1[6];
__int32 draw_cost_sub_item_count_1_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_2[6];
__int32 draw_cost_sub_item_2_Size() const {return 6;};
int draw_cost_sub_item_2_tableId() const {return 195;};
__int16 draw_cost_sub_item_count_2[6];
__int32 draw_cost_sub_item_count_2_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_3[6];
__int32 draw_cost_sub_item_3_Size() const {return 6;};
int draw_cost_sub_item_3_tableId() const {return 195;};
__int16 draw_cost_sub_item_count_3[6];
__int32 draw_cost_sub_item_count_3_Size() const {return 6;};
BnsTables::Shared::TableRef draw_cost_sub_item_4[6];
__int32 draw_cost_sub_item_4_Size() const {return 6;};
int draw_cost_sub_item_4_tableId() const {return 195;};
__int16 draw_cost_sub_item_count_4[6];
__int32 draw_cost_sub_item_count_4_Size() const {return 6;};
BnsTables::Shared::TableRef succession_random_option[50];
__int32 succession_random_option_Size() const {return 50;};
int succession_random_option_tableId() const {return 205;};
__int16 succession_random_option_weight[50];
__int32 succession_random_option_weight_Size() const {return 50;};
__int32 succession_random_option_weight_total;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 1); }
		static __int16 TableId() { return 206; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_option_list_RecordPtr // : DrRecordPtr
	{
		item_improve_option_list_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}