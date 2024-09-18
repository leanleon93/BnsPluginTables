/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct closet_group_Record : BnsTables::Shared::DrEl
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
		__int8 category;
char Pad0[1];
__int16 sort_no;
BnsTables::Shared::TableRef charge_of_item_for_instant_payment;
int charge_of_item_for_instant_payment_tableId(){return 195;};
BnsTables::Shared::TableRef item_to_be_paid;
int item_to_be_paid_tableId(){return 195;};
bool check_equip_characteristics;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 60; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) closet_group_RecordPtr // : DrRecordPtr
	{
		closet_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::closet_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}