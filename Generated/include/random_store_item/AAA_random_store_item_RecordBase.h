/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct random_store_item_Record : DrEl
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
		wchar_t* alias;
Data::TableRef item;
int item_tableId(){return 189;};
__int16 item_count;
char Pad0[2];
__int32 item_price_money;
Data::TableRef item_price_item;
int item_price_item_tableId(){return 189;};
__int16 item_price_item_amount;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 294; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_store_item_RecordPtr // : DrRecordPtr
	{
		random_store_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::random_store_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}