/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int description_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return -1; }
		enum class fixed_item_condition {
			none = 0,
			variation_1 = 1,
			variation_2 = 2,
			variation_3 = 3,
			variation_4 = 4,
			variation_5 = 5,
			variation_6 = 6,
			variation_7 = 7,
			variation_8 = 8,
			jump = 9,
			change_group = 10,
			exchange = 11,
			black_sky = 12,
			down = 13,
			hide_line = 14,
			hide_line_and_tooltip = 15,
			hide_tooltip = 16,
		};
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