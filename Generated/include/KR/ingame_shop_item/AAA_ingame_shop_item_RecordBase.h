/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ingame_shop_item_Record : BnsTables::Shared::DrEl
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
__int32 ingame_shop_tab_id;
BnsTables::Shared::TableRef item;
int item_tableId() const {return 202;};
__int16 item_count;
signed char cost_type;
char Pad0[1];
__int32 item_cost;
signed char level;
signed char mastery_level;
char Pad1[2];
BnsTables::Shared::TableRef content_quota;
int content_quota_tableId() const {return 69;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 192; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ingame_shop_item_RecordPtr // : DrRecordPtr
	{
		ingame_shop_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}