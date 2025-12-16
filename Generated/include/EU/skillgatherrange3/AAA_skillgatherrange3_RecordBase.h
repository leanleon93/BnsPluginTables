/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillgatherrange3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char cast_dir_caster;
signed char cast_dir_target;
__int16 range_cast_min;
__int16 range_cast_max;
__int16 range_cast_height;
__int16 range_cast_depth;
__int16 range_cast_laser_width;
__int16 gather_radius_min[5];
__int32 gather_radius_min_Size() const {return 5;};
__int16 gather_radius_max[5];
__int32 gather_radius_max_Size() const {return 5;};
__int16 gather_laser_width_min[5];
__int32 gather_laser_width_min_Size() const {return 5;};
__int16 gather_laser_width_max[5];
__int32 gather_laser_width_max_Size() const {return 5;};
__int16 gather_laser_front_distance_min[5];
__int32 gather_laser_front_distance_min_Size() const {return 5;};
__int16 gather_laser_front_distance_max[5];
__int32 gather_laser_front_distance_max_Size() const {return 5;};
__int16 gather_laser_back_distance_min[5];
__int32 gather_laser_back_distance_min_Size() const {return 5;};
__int16 gather_laser_back_distance_max[5];
__int32 gather_laser_back_distance_max_Size() const {return 5;};
__int16 shifting_laser_width_min;
__int16 shifting_laser_width_max;
__int16 shifting_laser_distance_min;
__int16 shifting_laser_distance_max;
__int16 shifting_laser_height;
__int16 shifting_laser_depth;
__int16 shifting_laser_offset;
__int16 target_z[5];
__int32 target_z_Size() const {return 5;};
signed char summon_base_pos_type;
char Pad0[1];
__int16 summon_base_pos_relative_distance;
signed char summon_base_dir_type;
char Pad1[1];
__int16 summon_base_dir_relative_angle;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 17); }
		static __int16 TableId() { return 364; }
		static __int32 SubType() { return -1; }
		enum class cast_dir_caster {
			value_360 = 0,
			front_180 = 1,
			back_180 = 2,
			front_90 = 3,
			back_90 = 4,
			front_15 = 5,
			front_30 = 6,
			front_45 = 7,
			front_60 = 8,
			front_120 = 9,
			front_270 = 10,
		};

		enum class summon_base_pos_type {
			caster = 0,
			target = 1,
		};

		enum class summon_base_dir_type {
			caster = 0,
			target = 1,
			caster_to_target = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillgatherrange3_RecordPtr // : DrRecordPtr
	{
		skillgatherrange3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}