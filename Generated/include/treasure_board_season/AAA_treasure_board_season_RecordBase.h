/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct treasure_board_season_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool season_enable;
char Pad0[3];
Data::TableRef treasure_board_page[10];
int treasure_board_page_tableId(){return 409;};
Data::TableRef season_reward_item;
int season_reward_item_tableId(){return 189;};
__int16 season_reward_item_count;
char Pad1[2];
Data::TableRef season_name;
int season_name_tableId(){return 405;};
wchar_t* season_end_time;
wchar_t* season_board_symbol_on;
wchar_t* season_board_symbol_off;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 411; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_season_RecordPtr // : DrRecordPtr
	{
		treasure_board_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::treasure_board_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}