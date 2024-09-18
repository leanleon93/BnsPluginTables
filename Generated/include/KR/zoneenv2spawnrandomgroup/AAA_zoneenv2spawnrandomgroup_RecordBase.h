/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zoneenv2spawnrandomgroup_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 group_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 465; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2spawnrandomgroup_RecordPtr // : DrRecordPtr
	{
		zoneenv2spawnrandomgroup_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2spawnrandomgroup_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}