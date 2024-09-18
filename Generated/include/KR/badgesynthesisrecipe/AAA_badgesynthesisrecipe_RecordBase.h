/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct badgesynthesisrecipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 category;
__int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef result_item[80];
int result_item_tableId(){return 195;};
__int16 result_item_rate[80];
__int32 result_item_rate_sum_by_grade[9];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 29; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badgesynthesisrecipe_RecordPtr // : DrRecordPtr
	{
		badgesynthesisrecipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::badgesynthesisrecipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}