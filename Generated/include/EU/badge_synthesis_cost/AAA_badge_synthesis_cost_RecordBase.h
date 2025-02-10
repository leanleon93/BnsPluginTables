/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct badge_synthesis_cost_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef required_item[8];
__int32 required_item_Size() const {return 8;};
int required_item_tableId() const {return 195;};
__int16 required_item_count[8];
__int32 required_item_count_Size() const {return 8;};
__int32 money_cost;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 28; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_synthesis_cost_RecordPtr // : DrRecordPtr
	{
		badge_synthesis_cost_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}