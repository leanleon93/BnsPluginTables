/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
signed char move_type;
char Pad0[3];
BnsTables::Shared::TableRef warp_social;
int warp_social_tableId() const {return 397;};
wchar_t* description;
__int16 sync;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 52); }
		static __int16 TableId() { return 488; }
		static __int32 SubType() { return -1; }
		enum class move_type {
			walk = 0,
			run = 1,
			warp = 2,
			sprint = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepathway_RecordPtr // : DrRecordPtr
	{
		zonepathway_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}