/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct phantomsword3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char fly_type;
char Pad0[3];
__int32 force_caster_fly_attach_time;
wchar_t* start_bone;
wchar_t* attack_bone;
signed char fire_arrival_x[6];
__int32 fire_arrival_x_Size() const {return 6;};
signed char fire_arrival_y[6];
__int32 fire_arrival_y_Size() const {return 6;};
__int32 fire_angle[6];
__int32 fire_angle_Size() const {return 6;};
wchar_t* cast_show[6];
__int32 cast_show_Size() const {return 6;};
wchar_t* fire_show_1[6];
__int32 fire_show_1_Size() const {return 6;};
wchar_t* exec_show_1[6];
__int32 exec_show_1_Size() const {return 6;};
wchar_t* return_show_1[6];
__int32 return_show_1_Size() const {return 6;};
wchar_t* return_ani_1[6];
__int32 return_ani_1_Size() const {return 6;};
wchar_t* fire_show_2[6];
__int32 fire_show_2_Size() const {return 6;};
wchar_t* exec_show_2[6];
__int32 exec_show_2_Size() const {return 6;};
wchar_t* return_show_2[6];
__int32 return_show_2_Size() const {return 6;};
wchar_t* return_ani_2[6];
__int32 return_ani_2_Size() const {return 6;};
wchar_t* fire_show_3[6];
__int32 fire_show_3_Size() const {return 6;};
wchar_t* exec_show_3[6];
__int32 exec_show_3_Size() const {return 6;};
wchar_t* return_show_3[6];
__int32 return_show_3_Size() const {return 6;};
wchar_t* return_ani_3[6];
__int32 return_ani_3_Size() const {return 6;};
wchar_t* fire_show_4[6];
__int32 fire_show_4_Size() const {return 6;};
wchar_t* exec_show_4[6];
__int32 exec_show_4_Size() const {return 6;};
wchar_t* return_show_4[6];
__int32 return_show_4_Size() const {return 6;};
wchar_t* return_ani_4[6];
__int32 return_ani_4_Size() const {return 6;};
wchar_t* fire_show_5[6];
__int32 fire_show_5_Size() const {return 6;};
wchar_t* exec_show_5[6];
__int32 exec_show_5_Size() const {return 6;};
wchar_t* return_show_5[6];
__int32 return_show_5_Size() const {return 6;};
wchar_t* return_ani_5[6];
__int32 return_ani_5_Size() const {return 6;};
wchar_t* despawn_show[6];
__int32 despawn_show_Size() const {return 6;};
__int32 delay_respawn_time;
wchar_t* delay_respawn_show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 19); }
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) phantomsword3_RecordPtr // : DrRecordPtr
	{
		phantomsword3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}