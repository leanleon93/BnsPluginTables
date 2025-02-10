/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct randombox_preview_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::ExplicitTableRef fixed_item[8];
__int32 fixed_item_Size() const {return 8;};
signed char fixed_item_condition[8];
__int32 fixed_item_condition_Size() const {return 8;};
BnsTables::Shared::ExplicitTableRef selected_item[20];
__int32 selected_item_Size() const {return 20;};
signed char selected_item_condition[20];
__int32 selected_item_condition_Size() const {return 20;};
BnsTables::Shared::ExplicitTableRef random_item[20];
__int32 random_item_Size() const {return 20;};
signed char random_item_condition[20];
__int32 random_item_condition_Size() const {return 20;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 425;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 308; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randombox_preview_RecordPtr // : DrRecordPtr
	{
		randombox_preview_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}