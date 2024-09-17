/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct contents_reset_Record : DrEl
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
Data::ExplicitTableRef reset_target;
__int32 reset_money;
Data::TableRef reset_item[4];
int reset_item_tableId(){return 189;};
__int8 reset_item_count[4];
Data::TableRef quota;
int quota_tableId(){return 66;};
__int8 max_unbind_count;
char Pad0[3];
__int64 quota_recharge_amount;

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 72; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_reset_RecordPtr // : DrRecordPtr
	{
		contents_reset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_reset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}