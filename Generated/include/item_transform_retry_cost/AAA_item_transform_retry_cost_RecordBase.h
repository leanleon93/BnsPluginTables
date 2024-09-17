/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct item_transform_retry_cost_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef required_item_for_instant_payment[5];
int required_item_for_instant_payment_tableId(){return 189;};
__int16 mileage_range_max[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 213; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_transform_retry_cost_RecordPtr // : DrRecordPtr
	{
		item_transform_retry_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_transform_retry_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}