/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_sealed_dungeon_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef fixed_item[4];
__int32 fixed_item_Size() const {return 4;};
int fixed_item_tableId() const {return 202;};
__int16 fixed_item_count[4];
__int32 fixed_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 310; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		quest_sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}