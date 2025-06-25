/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct board_gacha_Record : BnsTables::Shared::DrEl
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
		signed char square_matrix_n;
char Pad0[1];
__int16 round_duration;
bool select_position_enable;
char Pad1[1];
__int16 participation_count_per_character;
signed char result_top_rank_count;
signed char top_rank_history_count;
char Pad2[2];
BnsTables::Shared::TableRef cost_item;
int cost_item_tableId() const {return 202;};
__int16 cost_item_count;
bool instant_payment_enable;
char Pad3[1];
BnsTables::Shared::TableRef instant_payment_item;
int instant_payment_item_tableId() const {return 202;};
wchar_t* board_image_player;
wchar_t* board_image_other_pc;
wchar_t* board_image_special;
wchar_t* board_image_first;
wchar_t* board_image_second;
wchar_t* board_image_third;
wchar_t* board_image_lucky_line;
wchar_t* effect_number_select;
wchar_t* effect_number_recieve;
wchar_t* effect_time_end;
wchar_t* effect_result_confirm_button;
wchar_t* effect_result_recieve_reward_window;
wchar_t* effect_result_reward_lucky;
wchar_t* effect_result_reward_special;
wchar_t* effect_result_reward_first;
wchar_t* effect_result_reward_second;
wchar_t* effect_result_reward_third;
wchar_t* effect_progress_bar_edge;
wchar_t* effect_progress_bar_end;
wchar_t* font_first_list_my_name;
wchar_t* font_first_list_other_name;
wchar_t* font_draw_reward_list_item_name;
wchar_t* font_recieve_reward_list_item_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 40; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) board_gacha_RecordPtr // : DrRecordPtr
	{
		board_gacha_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}