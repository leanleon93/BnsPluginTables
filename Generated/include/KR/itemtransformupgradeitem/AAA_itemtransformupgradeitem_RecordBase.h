/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemtransformupgradeitem_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char upgrade_type;
char Pad0[3];
BnsTables::Shared::TableRef upgrade_item[4];
__int32 upgrade_item_Size() const {return 4;};
int upgrade_item_tableId() const {return 202;};
signed char upgrade_item_stack_count[4];
__int32 upgrade_item_stack_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 229; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformupgradeitem_RecordPtr // : DrRecordPtr
	{
		itemtransformupgradeitem_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}