/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct fishing_show_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char show_type;
char Pad0[3];
wchar_t* player_show;
wchar_t* fishing_rod_anim;
wchar_t* fishing_float_show;
wchar_t* fish_anim;
__int32 fishing_show_duration;
bool loop;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 157; }
		static __int32 SubType() { return -1; }
		enum class show_type {
			none = 0,
			casting = 1,
			bonus_fishing_point_casting = 2,
			idle = 3,
			fake = 4,
			before_hookset = 5,
			hookset = 6,
			hookset_half = 7,
			fail = 8,
			catch_small = 9,
			catch_big = 10,
			grab_small_normal = 11,
			grab_small_rare = 12,
			grab_big_normal = 13,
			grab_big_rare = 14,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_show_RecordPtr // : DrRecordPtr
	{
		fishing_show_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}