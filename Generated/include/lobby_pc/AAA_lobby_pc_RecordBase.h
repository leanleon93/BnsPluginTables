/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct lobby_pc_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int8 sex;
__int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_set;
wchar_t* additional_anim_set;
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* select_anim;
wchar_t* idle_anim;
Data::TableRef equip_hand;
int equip_hand_tableId(){return 189;};
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

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 235; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) lobby_pc_RecordPtr // : DrRecordPtr
	{
		lobby_pc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::lobby_pc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}