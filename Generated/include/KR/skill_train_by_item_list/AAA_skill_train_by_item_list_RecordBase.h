/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_train_by_item_list_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef change_set[10];
__int32 change_set_Size() const {return 10;};
int change_set_tableId() const {return 366;};
__int16 change_set_prob_weight[10];
__int32 change_set_prob_weight_Size() const {return 10;};
__int32 change_set_total_prob_weight;
signed char change_set_total_count;
bool draw_enable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 367; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_list_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_list_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}