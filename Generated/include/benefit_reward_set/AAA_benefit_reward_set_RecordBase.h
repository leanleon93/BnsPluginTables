/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct benefit_reward_set_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 reward[4];
__int32 reward_value[4];
Data::TableRef name2;
int name2_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 39; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) benefit_reward_set_RecordPtr // : DrRecordPtr
	{
		benefit_reward_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::benefit_reward_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}