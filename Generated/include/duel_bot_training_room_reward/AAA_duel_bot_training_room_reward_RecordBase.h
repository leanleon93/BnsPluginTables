/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_training_room_reward_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int16 grade;
__int8 achievement;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef reward_item[3];
int reward_item_tableId(){return 189;};
__int8 reward_item_count[3];
char Pad0[1];
__int32 reward_exp;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 105; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_reward_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_training_room_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}