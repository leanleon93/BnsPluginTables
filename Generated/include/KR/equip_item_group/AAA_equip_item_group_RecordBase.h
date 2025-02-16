/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct equip_item_group_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef item_group_name;
int item_group_name_tableId() const {return 427;};
signed char item_group_category;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 124; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_group_RecordPtr // : DrRecordPtr
	{
		equip_item_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}