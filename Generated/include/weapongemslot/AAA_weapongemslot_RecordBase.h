/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct weapongemslot_Record : DrEl
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
		Data::TableRef delete_slot_consume_item[4];
int delete_slot_consume_item_tableId(){return 189;};
__int16 delete_slot_consume_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 429; }
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