/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct itemtransformupgradeitem_Record : DrEl
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
__int8 upgrade_type;
char Pad0[3];
Data::TableRef upgrade_item[4];
int upgrade_item_tableId(){return 189;};
__int8 upgrade_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 214; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformupgradeitem_RecordPtr // : DrRecordPtr
	{
		itemtransformupgradeitem_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemtransformupgradeitem_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}