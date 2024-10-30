/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct autotargetparameter_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stance_type;
signed char sensitivity_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view stance_type_EnumValue() const {return Get_stance_type_EnumValue(key.stance_type);};
std::string_view sensitivity_level_EnumValue() const {return Get_sensitivity_level_EnumValue(key.sensitivity_level);};
float target_angle[4];
__int32 target_angle_Size() const {return 4;};
float target_beam_width[4];
__int32 target_beam_width_Size() const {return 4;};
float target_band_first[4];
__int32 target_band_first_Size() const {return 4;};
float target_band_second[4];
__int32 target_band_second_Size() const {return 4;};
__int16 band_check_limit[4];
__int32 band_check_limit_Size() const {return 4;};
float target_change_delay[4];
__int32 target_change_delay_Size() const {return 4;};
float threshold_min[4];
__int32 threshold_min_Size() const {return 4;};
float threshold_max[4];
__int32 threshold_max_Size() const {return 4;};
float empty_delay[4];
__int32 empty_delay_Size() const {return 4;};
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
		bool _makeCopy;
	};
#pragma pack(pop)
}