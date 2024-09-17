/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct posetransit_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 before_pose;
__int8 after_pose;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 transit_time;
wchar_t* transit_anim_seq;
float fade_in;
float fade_out;
float moving_blend;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 278; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) posetransit_RecordPtr // : DrRecordPtr
	{
		posetransit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::posetransit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}