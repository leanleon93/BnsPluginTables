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
int appearance_tableId() const {return 85;};
wchar_t* select_anim;
wchar_t* idle_anim;
BnsTables::Shared::TableRef equip_hand;
int equip_hand_tableId() const {return 197;};
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
		static __int16 TableId() { return 244; }
		static __int32 SubType() { return -1; }
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