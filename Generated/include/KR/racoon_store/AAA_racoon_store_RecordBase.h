/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct racoon_store_Record : BnsTables::Shared::DrEl
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
__int8 store_tab_sort_no;
char Pad0[3];
BnsTables::Shared::TableRef store_tab_name;
int store_tab_name_tableId(){return 420;};
wchar_t* start_date;
wchar_t* end_date;
bool is_retire;
char Pad1[3];
__int32 slot_group[8];
__int8 free_reset_amount;
__int8 paid_reset_amount;
__int8 paid_reset_cost_type;
char Pad2[1];
BnsTables::Shared::TableRef paid_reset_cost_item;
int paid_reset_cost_item_tableId(){return 195;};
__int64 paid_reset_cost_amount;
wchar_t* auto_reset_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 300; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) racoon_store_RecordPtr // : DrRecordPtr
	{
		racoon_store_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::racoon_store_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}