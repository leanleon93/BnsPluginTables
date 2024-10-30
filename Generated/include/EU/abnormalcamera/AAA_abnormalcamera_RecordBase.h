/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct abnormalcamera_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char camera_type;
char Pad0[3];
float location_x;
float location_y;
float location_z;
float target_x;
float target_y;
float target_z;
float enter_duration;
bool leave_smooth;
char Pad1[3];
float leave_duration;
float height_far;
float height_middle;
float height_near;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 2; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) abnormalcamera_RecordPtr // : DrRecordPtr
	{
		abnormalcamera_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}