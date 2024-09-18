/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pc_cam_dist_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 stance;
bool combat_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float height_transition;
float middle_transition;
float far_limit_min;
float far_limit_max;
float transparency;
float far_height;
float middle_height;
float near_height;
float modulate_factor;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 267; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_cam_dist_RecordPtr // : DrRecordPtr
	{
		pc_cam_dist_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_cam_dist_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}