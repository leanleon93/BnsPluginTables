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
signed char store_tab_sort_no;
char Pad0[3];
BnsTables::Shared::TableRef store_tab_name;
int store_tab_name_tableId() const {return 441;};
__int64 start_date;
__int64 end_date;
bool is_retire;
char Pad1[3];
__int32 slot_group[8];
__int32 slot_group_Size() const {return 8;};
signed char free_reset_amount;
signed char paid_reset_amount;
signed char paid_reset_cost_type;
char Pad2[1];
BnsTables::Shared::TableRef paid_reset_cost_item;
int paid_reset_cost_item_tableId() const {return 204;};
__int64 paid_reset_cost_amount;
__int64 auto_reset_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return -1; }
		enum class paid_reset_cost_type {
			none = 0,
			item = 1,
			stone = 2,
			red_stone = 3,
			money = 4,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) racoon_store_RecordPtr // : DrRecordPtr
	{
		racoon_store_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}