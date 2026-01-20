/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct treasure_board_season_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef treasure_board_page[10];
__int32 treasure_board_page_Size() const {return 10;};
int treasure_board_page_tableId() const {return 442;};
BnsTables::Shared::TableRef season_reward_item;
int season_reward_item_tableId() const {return 203;};
__int16 season_reward_item_count;
char Pad1[2];
BnsTables::Shared::TableRef season_name;
int season_name_tableId() const {return 438;};
__int64 season_end_time;
wchar_t* season_board_symbol_on;
wchar_t* season_board_symbol_off;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 444; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_season_RecordPtr // : DrRecordPtr
	{
		treasure_board_season_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}