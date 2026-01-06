/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct moveanim_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char weapon;
signed char combat_pose;
signed char stance;
signed char link;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float moving_blend_time;
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 273; }
		static __int32 SubType() { return -1; }
		enum class weapon {
			none = 0,
			bare_hand = 1,
			sword = 2,
			gauntlet = 3,
			aura_bangle = 4,
			pistol = 5,
			rifle = 6,
			two_handed_axe = 7,
			bow = 8,
			staff = 9,
			dagger = 10,
			pet_1 = 11,
			pet_2 = 12,
			gun = 13,
			great_sword = 14,
			long_bow = 15,
			spear = 16,
			orb = 17,
			dual_blade = 18,
			instrument = 19,
		};

		enum class combat_pose {
			none = 0,
			peace = 1,
			combat_nontarget = 2,
			combat_target = 3,
		};

		enum class stance {
			stance_none = 0,
			npcgibonjase = 1,
			cheongeomse = 2,
			geomryeongse = 3,
			danta = 4,
			yeongye = 5,
			chesur = 6,
			nabdo = 7,
			gyeonggigong = 8,
			yeongigong = 9,
			ganggigong = 10,
			gweonchongmodeu = 11,
			reoncheomodeu = 12,
			pagoe = 13,
			boho = 14,
			cheorbyeog = 15,
			sohwan = 16,
			gyoran = 17,
			eunsin = 18,
			amsar = 19,
			geomsur = 20,
			eogeom = 21,
			bardo = 22,
			npcjase1 = 23,
			npcjase2 = 24,
			npcjase3 = 25,
			sohwansu_follow = 26,
			sohwansu_command_1 = 27,
			sohwansu_flying = 28,
			jusur = 29,
			gangrim = 30,
			yugweon = 31,
			gigong = 32,
			naengjeong = 33,
			gwanggi = 34,
			janggung = 35,
			jeongryeonggung = 36,
			jjireugi = 37,
			begi = 38,
			cheongroe = 39,
			hyeorroe = 40,
			eogeomse = 41,
			jeongsu = 42,
			yeogsu = 43,
			hansonyeogsu = 44,
			ganiyeonju = 45,
			upeo = 46,
			yeonju = 47,
			ssangweor = 48,
			noesin = 49,
			chimsig = 50,
			yeomje = 51,
			npcjusijase1 = 52,
			npcjusijase2 = 53,
			npcjusijase3 = 54,
		};

		enum class link {
			none = 0,
			mount = 1,
			inhalation = 2,
			slugfest = 3,
			catch_val = 4,
			catch_none_human = 5,
			catch_friend = 6,
			inhalation_catch = 7,
			range_catch = 8,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) moveanim_RecordPtr // : DrRecordPtr
	{
		moveanim_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}