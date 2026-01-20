/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_skill_page_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char skill_page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
signed char charge_type;
char Pad0[3];
BnsTables::Shared::TableRef required_item[4];
__int32 required_item_Size() const {return 4;};
int required_item_tableId() const {return 204;};
signed char required_item_count[4];
__int32 required_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 137; }
		static __int32 SubType() { return -1; }
		enum class charge_type {
			item = 0,
			money = 1,
			item_or_money = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_skill_page_RecordPtr // : DrRecordPtr
	{
		expand_skill_page_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}