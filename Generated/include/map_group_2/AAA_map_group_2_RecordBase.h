/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct map_group_2_Record : DrEl
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
__int8 quest_filtering_type;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 239; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) map_group_2_RecordPtr // : DrRecordPtr
	{
		map_group_2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::map_group_2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}