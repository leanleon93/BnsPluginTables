/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct abnormalcamera_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 camera_type;
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

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 2; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) abnormalcamera_RecordPtr // : DrRecordPtr
	{
		abnormalcamera_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::abnormalcamera_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}