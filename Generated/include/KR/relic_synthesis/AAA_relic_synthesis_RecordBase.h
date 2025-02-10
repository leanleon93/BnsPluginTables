/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct relic_synthesis_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef required_item[4];
__int32 required_item_Size() const {return 4;};
int required_item_tableId() const {return 197;};
__int16 required_item_count[4];
__int32 required_item_count_Size() const {return 4;};
__int32 money_cost;
BnsTables::Shared::TableRef result_item[100];
__int32 result_item_Size() const {return 100;};
int result_item_tableId() const {return 197;};
__int16 result_item_rate[100];
__int32 result_item_rate_Size() const {return 100;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 329; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_synthesis_RecordPtr // : DrRecordPtr
	{
		relic_synthesis_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}