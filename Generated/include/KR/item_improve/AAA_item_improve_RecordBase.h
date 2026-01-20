/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_improve_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef cost_main_brand[5];
__int32 cost_main_brand_Size() const {return 5;};
int cost_main_brand_tableId() const {return 197;};
BnsTables::Shared::TableRef cost_main_item[5];
__int32 cost_main_item_Size() const {return 5;};
int cost_main_item_tableId() const {return 204;};
__int16 cost_main_item_count[5];
__int32 cost_main_item_count_Size() const {return 5;};
char Pad1[2];
BnsTables::Shared::TableRef cost_sub_item_1[8];
__int32 cost_sub_item_1_Size() const {return 8;};
int cost_sub_item_1_tableId() const {return 204;};
__int16 cost_sub_item_count_1[8];
__int32 cost_sub_item_count_1_Size() const {return 8;};
BnsTables::Shared::TableRef cost_sub_item_2[8];
__int32 cost_sub_item_2_Size() const {return 8;};
int cost_sub_item_2_tableId() const {return 204;};
__int16 cost_sub_item_count_2[8];
__int32 cost_sub_item_count_2_Size() const {return 8;};
BnsTables::Shared::TableRef cost_sub_item_3[8];
__int32 cost_sub_item_3_Size() const {return 8;};
int cost_sub_item_3_tableId() const {return 204;};
__int16 cost_sub_item_count_3[8];
__int32 cost_sub_item_count_3_Size() const {return 8;};
BnsTables::Shared::TableRef cost_sub_item_4[8];
__int32 cost_sub_item_4_Size() const {return 8;};
int cost_sub_item_4_tableId() const {return 204;};
__int16 cost_sub_item_count_4[8];
__int32 cost_sub_item_count_4_Size() const {return 8;};
BnsTables::Shared::TableRef cost_sub_item_5[8];
__int32 cost_sub_item_5_Size() const {return 8;};
int cost_sub_item_5_tableId() const {return 204;};
__int16 cost_sub_item_count_5[8];
__int32 cost_sub_item_count_5_Size() const {return 8;};
__int32 cost_money[5];
__int32 cost_money_Size() const {return 5;};
__int16 success_probability[5];
__int32 success_probability_Size() const {return 5;};
bool use_success_probability[5];
__int32 use_success_probability_Size() const {return 5;};
bool mileage_enable;
bool mileage_save[5];
__int32 mileage_save_Size() const {return 5;};
char Pad2[3];
BnsTables::Shared::TableRef mileage_random_distribution[5];
__int32 mileage_random_distribution_Size() const {return 5;};
int mileage_random_distribution_tableId() const {return 321;};
signed char cost_item_discount_minimum_value[5];
__int32 cost_item_discount_minimum_value_Size() const {return 5;};
char Pad3[3];
__int32 success_option_list_id;
signed char success_option_slot_number;
signed char fail_level_diff[5];
__int32 fail_level_diff_Size() const {return 5;};
bool fixed_all_option;
char Pad4[1];
__int32 success_option_list_id_all[5];
__int32 success_option_list_id_all_Size() const {return 5;};
signed char success_option_list_id_all_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 0); }
		static __int16 TableId() { return 213; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_RecordPtr // : DrRecordPtr
	{
		item_improve_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}