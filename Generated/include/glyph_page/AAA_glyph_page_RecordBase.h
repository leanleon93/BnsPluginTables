/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct glyph_page_Record : DrEl
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
		Data::TableRef name;
int name_tableId(){return 405;};
__int32 cost_money;
Data::TableRef cost_item[4];
int cost_item_tableId(){return 189;};
__int16 cost_item_count[4];

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 154; }
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