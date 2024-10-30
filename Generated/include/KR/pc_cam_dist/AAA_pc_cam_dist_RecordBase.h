/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pc_cam_dist_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;
signed char stance;
bool combat_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view race_EnumValue() const {return Get_race_EnumValue(key.race);};
std::string_view sex_EnumValue() const {return Get_sex_EnumValue(key.sex);};
std::string_view stance_EnumValue() const {return Get_stance_EnumValue(key.stance);};
float height_transition;
float middle_transition;
float far_limit_min;
float far_limit_max;
float worldboss_camera_limit_min;
float worldboss_camera_limit_max;
float transparency;
float far_height;
float middle_height;
float near_height;
float modulate_factor;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 277; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_cam_dist_RecordPtr // : DrRecordPtr
	{
		pc_cam_dist_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}