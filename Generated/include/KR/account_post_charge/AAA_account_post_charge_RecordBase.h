/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct account_post_charge_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 charge_money;
BnsTables::Shared::TableRef charge_item[2];
int charge_item_tableId(){return 195;};
__int32 charge_item_amount[2];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 5; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) account_post_charge_RecordPtr // : DrRecordPtr
	{
		account_post_charge_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::account_post_charge_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}