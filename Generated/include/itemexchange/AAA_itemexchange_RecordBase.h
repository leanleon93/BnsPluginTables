/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct itemexchange_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 rule_usage;
char Pad0[3];
Data::ExplicitTableRef required_item[4];
__int8 required_item_min_level[4];
__int16 required_item_stack_count[4];
Data::TableRef normal_item[4];
int normal_item_tableId(){return 189;};
__int16 normal_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 191; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemexchange_RecordPtr // : DrRecordPtr
	{
		itemexchange_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemexchange_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}