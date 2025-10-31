/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct autotargetparameter_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stance_type;
signed char sensitivity_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float target_angle[4];
__int32 target_angle_Size() const {return 4;};
float target_beam_width[4];
__int32 target_beam_width_Size() const {return 4;};
float target_band_first[4];
__int32 target_band_first_Size() const {return 4;};
float target_band_second[4];
__int32 target_band_second_Size() const {return 4;};
__int16 band_check_limit[4];
__int32 band_check_limit_Size() const {return 4;};
float target_change_delay[4];
__int32 target_change_delay_Size() const {return 4;};
float threshold_min[4];
__int32 threshold_min_Size() const {return 4;};
float threshold_max[4];
__int32 threshold_max_Size() const {return 4;};
float empty_delay[4];
__int32 empty_delay_Size() const {return 4;};
float target_gather_angle;
float stun_delay;
float kneel_delay;
float down_delay;
float mid_air_delay;
float swoon_delay;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 25; }
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

		enum class sensitivity_level {
			low = 0,
			medium = 1,
			high = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) autotargetparameter_RecordPtr // : DrRecordPtr
	{
		autotargetparameter_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}