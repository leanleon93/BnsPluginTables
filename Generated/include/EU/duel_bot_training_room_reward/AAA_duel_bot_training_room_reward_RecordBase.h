/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_bot_training_room_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
char Pad_key_0[1];
__int16 grade;
signed char achievement;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef reward_item[3];
__int32 reward_item_Size() const {return 3;};
int reward_item_tableId() const {return 197;};
signed char reward_item_count[3];
__int32 reward_item_count_Size() const {return 3;};
char Pad0[1];
__int32 reward_exp;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 106; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_reward_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}