/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct linkmoveanim_Record : BnsTables::Shared::DrEl
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
signed char pose_type;
char Pad0[3];
wchar_t* die_anim;
signed char dead_abnomal_idle;
char Pad1[3];
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 249; }
		static __int32 SubType() { return -1; }
		enum class pose_type {
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

		enum class dead_abnomal_idle {
			normal = 0,
			dead = 1,
			dead_hide = 2,
			dead_back = 3,
			dead_front = 4,
			dead_swim_area = 5,
			exhaustion = 6,
			mount_linker = 7,
			mount_linkee = 8,
			inhalation_linker = 9,
			inhalation_linkee = 10,
			stun = 11,
			stagger = 12,
			down = 13,
			block = 14,
			air = 15,
			air2 = 16,
			air3 = 17,
			kneel = 18,
			magnetic = 19,
			stiff = 20,
			front_down = 21,
			block2 = 22,
			flee = 23,
			knockback_stand = 24,
			knockback_kneel = 25,
			knockback_frontdown = 26,
			knockback_down = 27,
			picking = 28,
			fast_freezing = 29,
			impregnability = 30,
			hide = 31,
			burrow = 32,
			restoration = 33,
			block3 = 34,
			landing_shock = 35,
			catch_val = 36,
			catched = 37,
			catch_none_human = 38,
			catched_none_human = 39,
			catch_friend = 40,
			catched_friend = 41,
			catch_inhalation = 42,
			catched_inhalation = 43,
			npc_block = 44,
			sit_down = 45,
			silver_wep = 46,
			ironfotess = 47,
			presentation_linke = 48,
			spider_web = 49,
			state_social = 50,
			block4 = 51,
			dead_duel = 52,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) linkmoveanim_RecordPtr // : DrRecordPtr
	{
		linkmoveanim_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}