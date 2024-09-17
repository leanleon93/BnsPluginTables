/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct emoticon_Record : DrEl
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
__int32 index;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 114; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) emoticon_RecordPtr // : DrRecordPtr
	{
		emoticon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::emoticon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}