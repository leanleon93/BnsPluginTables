/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class attendance_RecordSubType : __int32
    {
		attendance_record_sub_board_game = 0,
		attendance_record_sub_continual_board_game = 1,
		attendance_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct attendance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* background_texture;
wchar_t* background_sub_texture;
__int16 background_texture_width;
__int16 background_texture_height;
__int16 slot_index[120];
__int32 slot_index_Size() const {return 120;};
float slot_offset_x;
float slot_offset_y;
__int16 slot_column_count;
char Pad0[2];
float slot_gap_x;
float slot_gap_y;
wchar_t* player_unit_imageset;
float player_unit_show_duration;
float player_unit_hide_duration;
float reward_alpha_animation_show_duration;
float reward_alpha_animation_hide_duration;
float reward_show_duration;
float reward_hide_duration;
wchar_t* reward_show_sound_ref;
wchar_t* reward_show_icon_fore_particle_ref;
float reward_show_icon_fore_particle_scale;
wchar_t* reward_show_icon_back_particle_ref;
float reward_show_icon_back_particle_scale;
wchar_t* reward_chance_ui_action_ref;
float reward_chance_ui_action_duration;
wchar_t* reward_chance_result_icon_particle_ref;
float reward_chance_result_show_duration;
wchar_t* reward_chance_result_sound_ref;
float finish_reward_show_duration;
float finish_reward_hide_duration;
wchar_t* finish_reward_show_sound_ref;
wchar_t* finish_reward_show_icon_fore_particle_ref;
float finish_reward_show_icon_fore_particle_scale;
wchar_t* finish_reward_show_icon_back_particle_ref;
float finish_reward_show_icon_back_particle_scale;
wchar_t* can_attend_particle_ref;
float can_attend_particle_scale;
wchar_t* goal_icon_front_particle_ref;
wchar_t* goal_icon_back_particle_ref;
wchar_t* background_particle_ref;
float background_particle_scale;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 15; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attendance_RecordPtr // : DrRecordPtr
	{
		attendance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}