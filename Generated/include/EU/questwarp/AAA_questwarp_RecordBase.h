/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct questwarp_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 quest_id;
signed char mission_step_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 470;};
__int16 x;
__int16 y;
__int16 z;
__int16 yaw;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 303; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questwarp_RecordPtr // : DrRecordPtr
	{
		questwarp_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}