/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct stance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stance_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
bool initialize;
char Pad0[1];
__int16 default_sp;
__int16 max_sp;
char Pad1[2];
BnsTables::Shared::TableRef effect[4];
__int32 effect_Size() const {return 4;};
int effect_tableId() const {return 115;};
bool impossible_equip;
bool hide_weapon;
bool clone_weapon_appearance_to_left;
char Pad2[1];
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
signed char secondgauge_name;
signed char secondgauge_use_type;
char Pad3[2];
wchar_t* combat_mode_particle;
float combat_mode_particle_followup_time_min;
float combat_mode_particle_followup_time_max;
wchar_t* combat_mode_particle_release_show;
wchar_t* soul_fighter_weapon_particle;
float soul_fighter_weapon_particle_followup_time_min;
float soul_fighter_weapon_particle_followup_time_max;
wchar_t* soul_fighter_weapon_buff_particle;
float soul_fighter_weapon_buff_particle_followup_time_min;
float soul_fighter_weapon_buff_particle_followup_time_max;
wchar_t* soul_fighter_weapon_particle_release_show;
wchar_t* phantom_not_combat_mode_particle;
float phantom_not_combat_mode_particle_followup_time_min;
float phantom_not_combat_mode_particle_followup_time_max;
wchar_t* phantom_not_combat_mode_particle_release_show;
wchar_t* kungfu_fighter_weapon_mesh_id;
wchar_t* kungfu_fighter_weapon_mesh_col[3];
__int32 kungfu_fighter_weapon_mesh_col_Size() const {return 3;};
wchar_t* kungfu_fighter_weapon_particle;
float kungfu_fighter_weapon_particle_followup_time_min;
float kungfu_fighter_weapon_particle_followup_time_max;
wchar_t* kungfu_fighter_weapon_particle_release_show;
signed char sp_gauge_style;
bool sp_gauge_numeric_visible;
char Pad4[2];
wchar_t* sp_gauge_full_particle_ref;
float sp_gauge_full_particle_scale;
wchar_t* sp_gauge_charge_particle_ref;
float sp_gauge_charge_particle_scale;
wchar_t* sp_gauge_consume_particle_ref;
float sp_gauge_consume_particle_scale;
wchar_t* sp_gauge_charge_observer_particle_ref;
float sp_gauge_charge_observer_particle_scale;
wchar_t* sp_gauge_consume_observer_particle_ref;
float sp_gauge_consume_observer_particle_scale;
wchar_t* summoned_flyingship_attachment_mesh_id;
wchar_t* summoned_flyingship_attachment_mesh_col[3];
__int32 summoned_flyingship_attachment_mesh_col_Size() const {return 3;};
wchar_t* summoned_flyingship_attachment_mesh_animset;
signed char summoned_preset_body_shape_part_value;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 295); }
		static __int16 TableId() { return 399; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) stance_RecordPtr // : DrRecordPtr
	{
		stance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}