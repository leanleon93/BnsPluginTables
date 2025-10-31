/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct event_skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stance_type;
signed char skill_result;
signed char event_type;
signed char state;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill_1[2];
__int32 skill_1_Size() const {return 2;};
__int32 skill_2[12];
__int32 skill_2_Size() const {return 12;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 131; }
		static __int32 SubType() { return -1; }
		enum class stance_type {
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

		enum class skill_result {
			none = 0,
			hit = 1,
			miss = 2,
			dodge = 3,
			parry = 4,
			perfect_parry = 5,
			bounce = 6,
			counter = 7,
			critical_hit = 8,
			hit_critical_hit = 9,
			back_hit_critical_hit = 10,
			not_hit = 11,
			all = 12,
			hit_critical_hit_parry = 13,
			parry_perfect_parry = 14,
			front_hit_critical_hit = 15,
			parry_perfect_parry_counter = 16,
			parry_perfect_parry_dodge = 17,
			parry_dodge = 18,
		};

		enum class event_type {
			none = 0,
			attack = 1,
			attacked = 2,
		};

		enum class state {
			none = 0,
			hold_deadbody = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_skill_RecordPtr // : DrRecordPtr
	{
		event_skill_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}