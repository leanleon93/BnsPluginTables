/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct zoneteleportswitch_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::XYZ position;
__int16 activate_radius;
char Pad0[2];
BnsTables::Shared::TableRef activate_teleport;
int activate_teleport_tableId() const {return 423;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 484; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneteleportswitch_RecordPtr // : DrRecordPtr
	{
		zoneteleportswitch_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}