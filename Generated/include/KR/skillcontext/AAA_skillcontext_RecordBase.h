/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillcontext_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char playerstance;
signed char playerstate;
signed char playerlinking;
signed char playerlinkstage;
signed char enemydistance;
signed char enemystate;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool context_use_default;
char Pad0[3];
__int32 context[2];
__int32 context_Size() const {return 2;};
bool skillbar_use_default;
char Pad1[3];
__int32 skillbar_stance[3];
__int32 skillbar_stance_Size() const {return 3;};
__int32 skillbar[12];
__int32 skillbar_Size() const {return 12;};
__int32 context_fallback[2];
__int32 context_fallback_Size() const {return 2;};
__int32 cmd_key_up;
__int32 cmd_key_down;
__int32 cmd_key_left;
__int32 cmd_key_right;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 13); }
		static __int16 TableId() { return 367; }
		static __int32 SubType() { return -1; }
		enum class playerstance {
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

		enum class enemystate {
			none = 0,
			impregnability = 1,
			summoned = 2,
			deadbody = 3,
			sprint = 4,
			sprint_jump = 5,
			drift = 6,
			glide = 7,
			diving = 8,
			swim = 9,
			death = 10,
			burrow = 11,
			linked = 12,
			falling = 13,
			down = 14,
			midair_3 = 15,
			midair_2 = 16,
			midair_1 = 17,
			kneel = 18,
			stun = 19,
			back_180 = 20,
			rupture = 21,
			defence = 22,
			block_move = 23,
			wildfire_2 = 24,
		};

		enum class playerlinking {
			none = 0,
			mount = 1,
			inhalation = 2,
			slugfest = 3,
			catch_val = 4,
			catch_none_human = 5,
			catch_friend = 6,
			inhalation_catch = 7,
			range_catch = 8,
			fixate_catch = 9,
		};

		enum class playerlinkstage {
			none = 0,
			stage_1 = 1,
			stage_2 = 2,
		};

		enum class enemydistance {
			none = 0,
			value_1 = 1,
			value_2 = 2,
			value_3 = 3,
			value_4 = 4,
			value_5 = 5,
			value_6 = 6,
			value_7 = 7,
			value_8 = 8,
			value_9 = 9,
			value_10 = 10,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillcontext_RecordPtr // : DrRecordPtr
	{
		skillcontext_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}