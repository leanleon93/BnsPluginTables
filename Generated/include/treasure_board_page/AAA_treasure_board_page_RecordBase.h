/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct treasure_board_page_Record : DrEl
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
Data::TableRef one_time_draw_item;
int one_time_draw_item_tableId(){return 189;};
__int16 one_time_draw_item_count;
char Pad0[2];
Data::TableRef five_times_draw_item;
int five_times_draw_item_tableId(){return 189;};
__int16 five_times_draw_item_count;
__int8 reset_condition;
__int8 reset_price_type;
Data::TableRef reset_price_item;
int reset_price_item_tableId(){return 189;};
__int16 reset_price_item_count;
char Pad1[2];
Data::TableRef quota;
int quota_tableId(){return 66;};
Data::TableRef treasure_board_reward[59];
int treasure_board_reward_tableId(){return 410;};
Data::TableRef treasure_board_name;
int treasure_board_name_tableId(){return 405;};
wchar_t* treasure_board_symbol_on;
wchar_t* treasure_board_symbol_off;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 409; }
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