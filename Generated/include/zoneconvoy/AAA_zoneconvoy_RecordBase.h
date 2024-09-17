/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct zoneconvoy_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 442; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneconvoy_RecordPtr // : DrRecordPtr
	{
		zoneconvoy_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneconvoy_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}