/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct contributionreward_Record : DrEl
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
__int8 contribution_type;
char Pad0[3];
Data::TableRef minimum_group_item;
int minimum_group_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 75; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contributionreward_RecordPtr // : DrRecordPtr
	{
		contributionreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contributionreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}