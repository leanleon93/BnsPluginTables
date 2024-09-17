/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct phantomsword3_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 fly_type;
char Pad0[3];
__int32 force_caster_fly_attach_time;
wchar_t* start_bone;
wchar_t* attack_bone;
__int8 fire_arrival_x[6];
__int8 fire_arrival_y[6];
__int32 fire_angle[6];
wchar_t* cast_show[6];
wchar_t* fire_show_1[6];
wchar_t* exec_show_1[6];
wchar_t* return_show_1[6];
wchar_t* return_ani_1[6];
wchar_t* fire_show_2[6];
wchar_t* exec_show_2[6];
wchar_t* return_show_2[6];
wchar_t* return_ani_2[6];
wchar_t* fire_show_3[6];
wchar_t* exec_show_3[6];
wchar_t* return_show_3[6];
wchar_t* return_ani_3[6];
wchar_t* fire_show_4[6];
wchar_t* exec_show_4[6];
wchar_t* return_show_4[6];
wchar_t* return_ani_4[6];
wchar_t* fire_show_5[6];
wchar_t* exec_show_5[6];
wchar_t* return_show_5[6];
wchar_t* return_ani_5[6];
wchar_t* despawn_show[6];
__int32 delay_respawn_time;
wchar_t* delay_respawn_show;

		static TableVersion Version() { return TableVersion(1, 19); }
		static __int16 TableId() { return 277; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) phantomsword3_RecordPtr // : DrRecordPtr
	{
		phantomsword3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::phantomsword3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}