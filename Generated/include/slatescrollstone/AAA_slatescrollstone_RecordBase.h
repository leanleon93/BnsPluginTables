/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct slatescrollstone_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef scroll;
int scroll_tableId(){return 364;};
Data::TableRef stone;
int stone_tableId(){return 366;};
bool tooltip;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 365; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatescrollstone_RecordPtr // : DrRecordPtr
	{
		slatescrollstone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatescrollstone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}