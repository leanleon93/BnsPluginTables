/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct questbonusreward_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 normal_bonus_reward_total_count;
char Pad0[3];
Data::TableRef fixed_item[4];
int fixed_item_tableId(){return 189;};
__int16 fixed_item_count[4];
__int8 fixed_item_total_count;
char Pad1[3];
Data::TableRef random_item[120];
int random_item_tableId(){return 189;};
__int16 random_item_stack_count_min[120];
__int16 random_item_stack_count_max[120];
__int8 random_item_selected_count;
__int8 random_item_total_input_count;
char Pad2[2];
Data::TableRef random_item_tooltip_text;
int random_item_tooltip_text_tableId(){return 405;};
__int8 paid_bonus_reward_total_count;
char Pad3[3];
__int32 paid_item_cost;
Data::TableRef paid_fixed_item[4];
int paid_fixed_item_tableId(){return 189;};
__int16 paid_fixed_item_count[4];
__int8 paid_fixed_item_total_count;
char Pad4[3];
Data::TableRef paid_random_item[120];
int paid_random_item_tableId(){return 189;};
__int16 paid_random_item_stack_count_min[120];
__int16 paid_random_item_stack_count_max[120];
__int8 paid_random_item_selected_count;
__int8 paid_random_item_total_input_count;
char Pad5[2];
Data::TableRef paid_random_item_tooltip_text;
int paid_random_item_tooltip_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 281; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusreward_RecordPtr // : DrRecordPtr
	{
		questbonusreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questbonusreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}