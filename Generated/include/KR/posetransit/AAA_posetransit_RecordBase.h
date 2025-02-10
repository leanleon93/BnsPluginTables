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
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return -1; }
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