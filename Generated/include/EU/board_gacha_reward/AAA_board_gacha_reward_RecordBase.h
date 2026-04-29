/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct board_gacha_reward_Record : BnsTables::Shared::DrEl
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
signed char reward_type;
char Pad0[1];
__int16 rank_min;
__int16 rank_max;
__int16 participation_count;
BnsTables::Shared::TableRef reward_item;
int reward_item_tableId() const {return 206;};
__int16 reward_item_count;
__int16 lucky_reward_prop_weight[5];
__int32 lucky_reward_prop_weight_Size() const {return 5;};
BnsTables::Shared::TableRef lucky_reward_item[5];
__int32 lucky_reward_item_Size() const {return 5;};
int lucky_reward_item_tableId() const {return 206;};
__int16 lucky_reward_item_count[5];
__int32 lucky_reward_item_count_Size() const {return 5;};
char Pad1[2];
BnsTables::Shared::TableRef lucky_reward_represent_item;
int lucky_reward_represent_item_tableId() const {return 206;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 41; }
		static __int32 SubType() { return -1; }
		enum class reward_type {
			none = 0,
			rank = 1,
			line = 2,
			lucky = 3,
			participation = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) board_gacha_reward_RecordPtr // : DrRecordPtr
	{
		board_gacha_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}