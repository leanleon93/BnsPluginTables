/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct weapongemslot_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef delete_slot_consume_item[4];
int delete_slot_consume_item_tableId(){return 195;};
__int16 delete_slot_consume_item_stack_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 444; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapongemslot_RecordPtr // : DrRecordPtr
	{
		weapongemslot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapongemslot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}