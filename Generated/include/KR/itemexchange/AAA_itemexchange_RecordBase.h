/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemexchange_Record : BnsTables::Shared::DrEl
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
signed char rule_usage;
char Pad0[3];
BnsTables::Shared::ExplicitTableRef required_item[4];
__int32 required_item_Size() const {return 4;};
signed char required_item_min_level[4];
__int32 required_item_min_level_Size() const {return 4;};
__int16 required_item_stack_count[4];
__int32 required_item_stack_count_Size() const {return 4;};
BnsTables::Shared::TableRef normal_item[4];
__int32 normal_item_Size() const {return 4;};
int normal_item_tableId() const {return 195;};
__int16 normal_item_stack_count[4];
__int32 normal_item_stack_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 197; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemexchange_RecordPtr // : DrRecordPtr
	{
		itemexchange_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}