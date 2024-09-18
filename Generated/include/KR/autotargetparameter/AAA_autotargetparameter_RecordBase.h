/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct autotargetparameter_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 stance_type;
__int8 sensitivity_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float target_angle[4];
float target_beam_width[4];
float target_band_first[4];
float target_band_second[4];
__int16 band_check_limit[4];
float target_change_delay[4];
float threshold_min[4];
float threshold_max[4];
float empty_delay[4];
float target_gather_angle;
float stun_delay;
float kneel_delay;
float down_delay;
float mid_air_delay;
float swoon_delay;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 25; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) autotargetparameter_RecordPtr // : DrRecordPtr
	{
		autotargetparameter_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::autotargetparameter_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}