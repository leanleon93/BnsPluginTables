/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct card_collection_page_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
__int32 cost_money;
BnsTables::Shared::TableRef cost_item[4];
__int32 cost_item_Size() const {return 4;};
int cost_item_tableId() const {return 202;};
__int16 cost_item_count[4];
__int32 cost_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 48; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) card_collection_page_RecordPtr // : DrRecordPtr
	{
		card_collection_page_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}