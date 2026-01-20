/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct treasure_board_page_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef one_time_draw_item;
int one_time_draw_item_tableId() const {return 204;};
__int16 one_time_draw_item_count;
char Pad0[2];
BnsTables::Shared::TableRef five_times_draw_item;
int five_times_draw_item_tableId() const {return 204;};
__int16 five_times_draw_item_count;
signed char reset_condition;
signed char reset_price_type;
BnsTables::Shared::TableRef reset_price_item;
int reset_price_item_tableId() const {return 204;};
__int16 reset_price_item_count;
char Pad1[2];
BnsTables::Shared::TableRef quota;
int quota_tableId() const {return 69;};
__int32 reward_grade_prob_weight[10];
__int32 reward_grade_prob_weight_Size() const {return 10;};
__int32 reward_grade_total_prob_weight;
__int32 draw_count_in_grade[10];
__int32 draw_count_in_grade_Size() const {return 10;};
__int32 max_draw_count;
BnsTables::Shared::TableRef treasure_board_reward[59];
__int32 treasure_board_reward_Size() const {return 59;};
int treasure_board_reward_tableId() const {return 446;};
__int16 treasure_board_reward_grade[59];
__int32 treasure_board_reward_grade_Size() const {return 59;};
char Pad2[2];
BnsTables::Shared::TableRef treasure_board_name;
int treasure_board_name_tableId() const {return 441;};
wchar_t* treasure_board_symbol_on;
wchar_t* treasure_board_symbol_off;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 445; }
		static __int32 SubType() { return -1; }
		enum class reset_condition {
			normal = 0,
			draw_all = 1,
		};

		enum class reset_price_type {
			free = 0,
			item = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_page_RecordPtr // : DrRecordPtr
	{
		treasure_board_page_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}