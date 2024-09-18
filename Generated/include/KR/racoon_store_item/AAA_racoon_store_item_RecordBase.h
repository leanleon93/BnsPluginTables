/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct racoon_store_item_Record : BnsTables::Shared::DrEl
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
__int32 slot_group;
BnsTables::Shared::TableRef item;
int item_tableId(){return 195;};
__int16 item_count;
__int8 item_grade;
char Pad0[1];
__int16 item_prob_weight;
char Pad1[2];
__int32 item_cost;
__int8 cost_type;
char Pad2[3];
BnsTables::Shared::TableRef cost_item;
int cost_item_tableId(){return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 301; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) racoon_store_item_RecordPtr // : DrRecordPtr
	{
		racoon_store_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::racoon_store_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}