/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct randombox_preview_Record : DrEl
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
Data::ExplicitTableRef fixed_item[8];
__int8 fixed_item_condition[8];
Data::ExplicitTableRef selected_item[20];
__int8 selected_item_condition[20];
Data::ExplicitTableRef random_item[20];
__int8 random_item_condition[20];
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 290; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randombox_preview_RecordPtr // : DrRecordPtr
	{
		randombox_preview_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::randombox_preview_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}