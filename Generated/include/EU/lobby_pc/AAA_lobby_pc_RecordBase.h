/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct lobby_pc_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;
signed char sex;
signed char category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_set;
wchar_t* additional_anim_set;
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 87;};
wchar_t* select_anim;
wchar_t* idle_anim;
BnsTables::Shared::TableRef equip_hand;
int equip_hand_tableId() const {return 202;};
wchar_t* pc_pos;
wchar_t* camera_pos;
wchar_t* camera_target;
wchar_t* select_lobby_show;
wchar_t* create_lobby_show;
wchar_t* create_lobby_levelsequence;
wchar_t* duel_lobby_show;
wchar_t* duel_lobby_other_show;
wchar_t* customize_lobby_idle_anim;
__int32 customize_lobby_event_show_time;
wchar_t* customize_lobby_event_show1;
wchar_t* customize_lobby_event_show2;
wchar_t* customize_lobby_event_show3;
float preview_world_cam_height_transition;
float preview_world_cam_middle_transition;
float preview_world_cam_far_limit_min;
float preview_world_cam_far_limit_max;
float preview_world_cam_far_height;
float preview_world_cam_middle_height;
float preview_world_cam_near_height;
float preview_world_cam_modulate_factor;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 251; }
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

		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

		enum class category {
			none = 0,
			lobby = 1,
			guild = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) lobby_pc_RecordPtr // : DrRecordPtr
	{
		lobby_pc_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}