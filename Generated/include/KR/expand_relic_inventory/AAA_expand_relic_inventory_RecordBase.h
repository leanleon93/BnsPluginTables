/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_relic_inventory_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char inventory_size;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
BnsTables::Shared::TableRef required_item[4];
__int32 required_item_Size() const {return 4;};
int required_item_tableId() const {return 195;};
signed char required_item_count[4];
__int32 required_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 131; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_relic_inventory_RecordPtr // : DrRecordPtr
	{
		expand_relic_inventory_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}