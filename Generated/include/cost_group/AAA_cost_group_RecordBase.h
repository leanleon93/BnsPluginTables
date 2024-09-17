/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct cost_group_Record : DrEl
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
Data::TableRef item[8];
int item_tableId(){return 189;};
__int16 item_amount[8];
__int64 money;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 76; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cost_group_RecordPtr // : DrRecordPtr
	{
		cost_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cost_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}