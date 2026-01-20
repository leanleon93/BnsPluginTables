/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct posetransit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char before_pose;
signed char after_pose;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 transit_time;
wchar_t* transit_anim_seq;
float fade_in;
float fade_out;
float moving_blend;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 305; }
		static __int32 SubType() { return -1; }
		enum class after_pose {
			standing = 0,
			dead = 1,
			dead_back = 2,
			dead_front = 3,
			stagger = 4,
			down = 5,
			front_down = 6,
			air = 7,
			air_back = 8,
			kneel = 9,
			burrow = 10,
			picking = 11,
			mount_linker = 12,
			mount_linkee = 13,
			catch_val = 14,
			catched = 15,
			catch_nonehuman = 16,
			catched_nonehuman = 17,
			catch_friend = 18,
			catched_friend = 19,
			hardwall = 20,
			ironfotess = 21,
			sit = 22,
			bomb_kneel = 23,
			inhalation_catch_sword = 24,
			inhalation_catch_nonehuman_sword = 25,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) posetransit_RecordPtr // : DrRecordPtr
	{
		posetransit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}