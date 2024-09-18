/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct abnormalmoveanim_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 pose_type;
char Pad0[3];
wchar_t* die_anim;
wchar_t* exhaustion_anim;
wchar_t* upper_idle;
wchar_t* lower_idle;
wchar_t* upper_walk_front;
wchar_t* lower_walk_front;
wchar_t* upper_walk_back;
wchar_t* lower_walk_back;
wchar_t* upper_walk_left;
wchar_t* lower_walk_left;
wchar_t* upper_walk_right;
wchar_t* lower_walk_right;
wchar_t* upper_walk_leftback;
wchar_t* lower_walk_leftback;
wchar_t* upper_walk_rightback;
wchar_t* lower_walk_rightback;
wchar_t* upper_run_front;
wchar_t* lower_run_front;
wchar_t* upper_run_back;
wchar_t* lower_run_back;
wchar_t* upper_run_left;
wchar_t* lower_run_left;
wchar_t* upper_run_right;
wchar_t* lower_run_right;
wchar_t* upper_run_leftback;
wchar_t* lower_run_leftback;
wchar_t* upper_run_rightback;
wchar_t* lower_run_rightback;
wchar_t* upper_jump_front;
wchar_t* lower_jump_front;
wchar_t* upper_jump_left;
wchar_t* lower_jump_left;
wchar_t* upper_jump_right;
wchar_t* lower_jump_right;
wchar_t* upper_turn_left;
wchar_t* lower_turn_left;
wchar_t* upper_turn_right;
wchar_t* lower_turn_right;
wchar_t* upper_jtoi;
wchar_t* lower_jtoi;
wchar_t* upper_jtomfront;
wchar_t* lower_jtomfront;
wchar_t* upper_jtomleft;
wchar_t* lower_jtomleft;
wchar_t* upper_jtomright;
wchar_t* lower_jtomright;
wchar_t* upper_jtomback;
wchar_t* lower_jtomback;
wchar_t* upper_mtojfront;
wchar_t* lower_mtojfront;
wchar_t* upper_mtojleft;
wchar_t* lower_mtojleft;
wchar_t* upper_mtojright;
wchar_t* lower_mtojright;
wchar_t* upper_mtoi;
wchar_t* lower_mtoi;
wchar_t* upper_ltor;
wchar_t* lower_ltor;
wchar_t* upper_rtol;
wchar_t* lower_rtol;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 40); }
		static __int16 TableId() { return 3; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) abnormalmoveanim_RecordPtr // : DrRecordPtr
	{
		abnormalmoveanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::abnormalmoveanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}