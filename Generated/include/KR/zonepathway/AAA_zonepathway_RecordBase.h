/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonepathway_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;
__int16 waypoint;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::XYZ pos;
__int8 move_type;
char Pad0[3];
BnsTables::Shared::TableRef warp_social;
int warp_social_tableId(){return 382;};
wchar_t* description;
__int16 sync;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 52); }
		static __int16 TableId() { return 469; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepathway_RecordPtr // : DrRecordPtr
	{
		zonepathway_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonepathway_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}