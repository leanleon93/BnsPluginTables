/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct job_change_item_exchange_group_Record : DrEl
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
Data::TableRef cost_item;
int cost_item_tableId(){return 189;};
__int16 cost_item_count;

		static TableVersion Version() { return TableVersion(2, 3); }
		static __int16 TableId() { return 219; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_item_exchange_group_RecordPtr // : DrRecordPtr
	{
		job_change_item_exchange_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_item_exchange_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}