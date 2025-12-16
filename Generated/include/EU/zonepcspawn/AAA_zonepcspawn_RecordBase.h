/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct zonepcspawn_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::XYZ pos;
BnsTables::Shared::XYZ summon_pos;
__int16 yaw;
char Pad0[2];
wchar_t* description;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 49); }
		static __int16 TableId() { return 489; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepcspawn_RecordPtr // : DrRecordPtr
	{
		zonepcspawn_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}