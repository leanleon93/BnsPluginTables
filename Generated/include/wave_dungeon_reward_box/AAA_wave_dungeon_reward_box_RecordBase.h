/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct wave_dungeon_reward_box_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int8 difficulty_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef gold_box;
int gold_box_tableId(){return 189;};
Data::TableRef silver_box;
int silver_box_tableId(){return 189;};
Data::TableRef bronze_box;
int bronze_box_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 424; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_reward_box_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_reward_box_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wave_dungeon_reward_box_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}