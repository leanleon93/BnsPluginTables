/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct summonedmoveanim_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 weapon;
__int8 combat_pose;
__int8 stance;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
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
wchar_t* pullout_weapon;
wchar_t* putin_weapon;
wchar_t* putin_bare_hand;
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

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 393; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedmoveanim_RecordPtr // : DrRecordPtr
	{
		summonedmoveanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedmoveanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}