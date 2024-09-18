/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct glyph_page_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};
__int32 cost_money;
BnsTables::Shared::TableRef cost_item[4];
int cost_item_tableId(){return 195;};
__int16 cost_item_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 158; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_page_RecordPtr // : DrRecordPtr
	{
		glyph_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::glyph_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}