/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct contents_reset_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
BnsTables::Shared::ExplicitTableRef reset_target;
__int32 reset_money;
BnsTables::Shared::TableRef reset_item[4];
__int32 reset_item_Size() const {return 4;};
int reset_item_tableId() const {return 195;};
signed char reset_item_count[4];
__int32 reset_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef quota;
int quota_tableId() const {return 67;};
signed char max_unbind_count;
char Pad0[3];
__int64 quota_recharge_amount;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 73; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_reset_RecordPtr // : DrRecordPtr
	{
		contents_reset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}