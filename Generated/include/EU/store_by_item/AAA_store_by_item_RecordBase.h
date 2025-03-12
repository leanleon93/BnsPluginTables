/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct store_by_item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef acquire_item[100];
__int32 acquire_item_Size() const {return 100;};
int acquire_item_tableId() const {return 198;};
BnsTables::Shared::TableRef dispose_item[100];
__int32 dispose_item_Size() const {return 100;};
int dispose_item_tableId() const {return 198;};
__int16 dispose_item_count[100];
__int32 dispose_item_count_Size() const {return 100;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 406; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) store_by_item_RecordPtr // : DrRecordPtr
	{
		store_by_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}