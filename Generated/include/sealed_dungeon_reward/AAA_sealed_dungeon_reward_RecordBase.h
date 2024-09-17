/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_reward_Record : DrEl
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
		wchar_t* alias;
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
__int8 sealed_level;
char Pad0[3];
Data::TableRef reward_item[5];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[5];

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}