/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct item_improve_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef cost_main_item[5];
int cost_main_item_tableId(){return 189;};
__int16 cost_main_item_count[5];
char Pad0[2];
Data::TableRef cost_sub_item_1[8];
int cost_sub_item_1_tableId(){return 189;};
__int16 cost_sub_item_count_1[8];
Data::TableRef cost_sub_item_2[8];
int cost_sub_item_2_tableId(){return 189;};
__int16 cost_sub_item_count_2[8];
Data::TableRef cost_sub_item_3[8];
int cost_sub_item_3_tableId(){return 189;};
__int16 cost_sub_item_count_3[8];
Data::TableRef cost_sub_item_4[8];
int cost_sub_item_4_tableId(){return 189;};
__int16 cost_sub_item_count_4[8];
Data::TableRef cost_sub_item_5[8];
int cost_sub_item_5_tableId(){return 189;};
__int16 cost_sub_item_count_5[8];
__int32 cost_money[5];
__int16 success_probability[5];
bool use_success_probability[5];
bool mileage_enable;
bool mileage_save[5];
__int8 cost_item_discount_minimum_value[5];
char Pad1[2];
__int32 success_option_list_id;
__int8 success_option_slot_number;
__int8 fail_level_diff[5];
bool fixed_all_option;
char Pad2[1];
__int32 success_option_list_id_all[5];
__int8 success_option_list_id_all_count;

		static TableVersion Version() { return TableVersion(6, 3); }
		static __int16 TableId() { return 198; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_RecordPtr // : DrRecordPtr
	{
		item_improve_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}