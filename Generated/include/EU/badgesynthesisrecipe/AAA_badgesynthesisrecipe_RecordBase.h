/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct badgesynthesisrecipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char category;
char Pad_key_0[3];
__int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef result_item[80];
__int32 result_item_Size() const {return 80;};
int result_item_tableId() const {return 198;};
__int16 result_item_rate[80];
__int32 result_item_rate_Size() const {return 80;};
__int32 result_item_rate_sum_by_grade[9];
__int32 result_item_rate_sum_by_grade_Size() const {return 9;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 29; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badgesynthesisrecipe_RecordPtr // : DrRecordPtr
	{
		badgesynthesisrecipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}