/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_random_store_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char random_store_number;
signed char slot_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef required_item;
int required_item_tableId() const {return 202;};
signed char required_item_count;
char Pad0[3];
BnsTables::Shared::TableRef required_item_for_instant_payment;
int required_item_for_instant_payment_tableId() const {return 202;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 133; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_random_store_RecordPtr // : DrRecordPtr
	{
		expand_random_store_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}