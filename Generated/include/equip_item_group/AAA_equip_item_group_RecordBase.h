/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct equip_item_group_Record : DrEl
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
		Data::TableRef item_group_name;
int item_group_name_tableId(){return 405;};
__int8 item_group_category;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 120; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_group_RecordPtr // : DrRecordPtr
	{
		equip_item_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_item_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}