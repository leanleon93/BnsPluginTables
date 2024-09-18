/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct board_gacha_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 reward_type;
char Pad0[1];
__int16 rank_min;
__int16 rank_max;
__int16 participation_count;
BnsTables::Shared::TableRef reward_item;
int reward_item_tableId(){return 195;};
__int16 reward_item_count;
char Pad1[2];
BnsTables::Shared::TableRef lucky_reward_item[5];
int lucky_reward_item_tableId(){return 195;};
__int16 lucky_reward_item_count[5];
char Pad2[2];
BnsTables::Shared::TableRef lucky_reward_represent_item;
int lucky_reward_represent_item_tableId(){return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 41; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) board_gacha_reward_RecordPtr // : DrRecordPtr
	{
		board_gacha_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::board_gacha_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}