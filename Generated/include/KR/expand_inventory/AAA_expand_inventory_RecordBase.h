/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_inventory_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 inventory_type;
__int16 inventory_size;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 level;
__int8 desirable_expand_level;
char Pad0[2];
__int32 money;
__int8 charge_type;
__int8 expand_size;
char Pad1[2];
BnsTables::Shared::TableRef required_item;
int required_item_tableId(){return 195;};
__int8 required_item_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 129; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_inventory_RecordPtr // : DrRecordPtr
	{
		expand_inventory_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_inventory_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}