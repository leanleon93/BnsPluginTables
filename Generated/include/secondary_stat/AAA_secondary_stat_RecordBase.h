/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct secondary_stat_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 primary_stat;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 secondary_stat[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 320; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) secondary_stat_RecordPtr // : DrRecordPtr
	{
		secondary_stat_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::secondary_stat_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}