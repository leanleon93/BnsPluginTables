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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef one_time_draw_item;
int one_time_draw_item_tableId(){return 195;};
__int16 one_time_draw_item_count;
char Pad0[2];
BnsTables::Shared::TableRef five_times_draw_item;
int five_times_draw_item_tableId(){return 195;};
__int16 five_times_draw_item_count;
__int8 reset_condition;
__int8 reset_price_type;
BnsTables::Shared::TableRef reset_price_item;
int reset_price_item_tableId(){return 195;};
__int16 reset_price_item_count;
char Pad1[2];
BnsTables::Shared::TableRef quota;
int quota_tableId(){return 67;};
__int32 reward_grade_prob_weight[10];
__int32 reward_grade_total_prob_weight;
__int32 draw_count_in_grade[10];
__int32 max_draw_count;
BnsTables::Shared::TableRef treasure_board_reward[59];
int treasure_board_reward_tableId(){return 425;};
__int16 treasure_board_reward_grade[59];
char Pad2[2];
BnsTables::Shared::TableRef treasure_board_name;
int treasure_board_name_tableId(){return 420;};
wchar_t* treasure_board_symbol_on;
wchar_t* treasure_board_symbol_off;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 424; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_page_RecordPtr // : DrRecordPtr
	{
		treasure_board_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::treasure_board_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}