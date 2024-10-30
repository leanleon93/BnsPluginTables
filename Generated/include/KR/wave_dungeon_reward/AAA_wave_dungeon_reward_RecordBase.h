/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct wave_dungeon_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
signed char difficulty_type;
signed char wave;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 reward_exp;
__int32 reward_money;
BnsTables::Shared::TableRef reward_item;
int reward_item_tableId() const {return 195;};
__int16 reward_item_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 440; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}