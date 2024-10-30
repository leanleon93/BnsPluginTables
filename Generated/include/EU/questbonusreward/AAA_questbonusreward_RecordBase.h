/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct questbonusreward_Record : BnsTables::Shared::DrEl
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
signed char normal_bonus_reward_total_count;
char Pad0[3];
BnsTables::Shared::TableRef fixed_item[4];
__int32 fixed_item_Size() const {return 4;};
int fixed_item_tableId() const {return 195;};
__int16 fixed_item_count[4];
__int32 fixed_item_count_Size() const {return 4;};
signed char fixed_item_total_count;
char Pad1[3];
BnsTables::Shared::TableRef random_item[120];
__int32 random_item_Size() const {return 120;};
int random_item_tableId() const {return 195;};
__int16 random_item_stack_count_min[120];
__int32 random_item_stack_count_min_Size() const {return 120;};
__int16 random_item_stack_count_max[120];
__int32 random_item_stack_count_max_Size() const {return 120;};
signed char random_item_selected_count;
signed char random_item_total_input_count;
char Pad2[2];
BnsTables::Shared::TableRef random_item_tooltip_text;
int random_item_tooltip_text_tableId() const {return 420;};
signed char paid_bonus_reward_total_count;
char Pad3[3];
__int32 paid_item_cost;
BnsTables::Shared::TableRef paid_fixed_item[4];
__int32 paid_fixed_item_Size() const {return 4;};
int paid_fixed_item_tableId() const {return 195;};
__int16 paid_fixed_item_count[4];
__int32 paid_fixed_item_count_Size() const {return 4;};
signed char paid_fixed_item_total_count;
char Pad4[3];
BnsTables::Shared::TableRef paid_random_item[120];
__int32 paid_random_item_Size() const {return 120;};
int paid_random_item_tableId() const {return 195;};
__int16 paid_random_item_stack_count_min[120];
__int32 paid_random_item_stack_count_min_Size() const {return 120;};
__int16 paid_random_item_stack_count_max[120];
__int32 paid_random_item_stack_count_max_Size() const {return 120;};
signed char paid_random_item_selected_count;
signed char paid_random_item_total_input_count;
char Pad5[2];
BnsTables::Shared::TableRef paid_random_item_tooltip_text;
int paid_random_item_tooltip_text_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 292; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusreward_RecordPtr // : DrRecordPtr
	{
		questbonusreward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}