/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pc_cam_dist_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;
signed char stance;
bool combat_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float height_transition;
float middle_transition;
float far_limit_min;
float far_limit_max;
float worldboss_camera_limit_min;
float worldboss_camera_limit_max;
float transparency;
float far_height;
float middle_height;
float near_height;
float modulate_factor;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return -1; }
		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_cam_dist_RecordPtr // : DrRecordPtr
	{
		pc_cam_dist_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}