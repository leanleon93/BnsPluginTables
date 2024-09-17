/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct item_graph_seed_group_Record : DrEl
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

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 195; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_graph_seed_group_RecordPtr // : DrRecordPtr
	{
		item_graph_seed_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_graph_seed_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}