/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct randomstoredrawreward_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int8 random_store_number;
__int32 required_draw_count;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef fixed_reward[4];
int fixed_reward_tableId(){return 189;};
__int8 fixed_reward_count[4];
Data::TableRef optional_reward[8];
int optional_reward_tableId(){return 189;};
__int8 optional_reward_count[8];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randomstoredrawreward_RecordPtr // : DrRecordPtr
	{
		randomstoredrawreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::randomstoredrawreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}