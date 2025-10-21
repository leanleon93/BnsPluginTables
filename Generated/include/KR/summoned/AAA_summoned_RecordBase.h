/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct summoned_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 id;
signed char sex;
signed char summoned_type;
signed char brain_type;
char Pad0[1];
__int16 combat_follow_distance;
__int16 far_event_distance;
signed char far_event_action_type;
char Pad1[1];
__int16 radius;
bool trace_master_skill_target;
char Pad2[3];
BnsTables::Shared::TableRef summoned_sequence;
int summoned_sequence_tableId() const {return 425;};
__int32 seq_skill[30];
__int32 seq_skill_Size() const {return 30;};
__int32 spawn_skill_id;
signed char immune_skill_attribute[4];
__int32 immune_skill_attribute_Size() const {return 4;};
__int16 immune_effect_attribute[8];
__int32 immune_effect_attribute_Size() const {return 8;};
signed char stance;
char Pad3[3];
__int32 lifetime_duration;
__int16 max_speed_near_master;
__int16 min_distance_to_lerp_speed;
__int16 max_distance_to_lerp_speed;
__int16 speed;
bool use_customized_appearance;
char Pad4[3];
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 87;};
wchar_t* animset;
BnsTables::Shared::TableRef spawn_social;
int spawn_social_tableId() const {return 397;};
BnsTables::Shared::TableRef respawn_in_social;
int respawn_in_social_tableId() const {return 397;};
BnsTables::Shared::TableRef respawn_out_social;
int respawn_out_social_tableId() const {return 397;};
wchar_t* spawn_show;
wchar_t* despawn_show;
wchar_t* combat_side_player_continuance_show;
wchar_t* combat_side_friend_continuance_show;
wchar_t* combat_side_enemy_continuance_show;
BnsTables::Shared::IconRef icon;
bool ui_show_buff_list;
bool ui_show_nameplate;
bool ui_show_summoned_stat;
bool ui_enable_pc_tooltip;
float mapunit_width;
float mapunit_height;
wchar_t* mapunit_imageset;
float mapunit_outsight_width;
float mapunit_outsight_height;
wchar_t* mapunit_outsight_imageset;
BnsTables::Shared::TableRef fixed_name;
int fixed_name_tableId() const {return 435;};
BnsTables::Shared::TableRef nameplate_title_state_normal;
int nameplate_title_state_normal_tableId() const {return 435;};
BnsTables::Shared::TableRef nameplate_title_state_duel_other_team;
int nameplate_title_state_duel_other_team_tableId() const {return 435;};
BnsTables::Shared::TableRef nameplate_name_state_anonymity;
int nameplate_name_state_anonymity_tableId() const {return 435;};
BnsTables::Shared::TableRef nameplate_name_state_duel_other_team;
int nameplate_name_state_duel_other_team_tableId() const {return 435;};
float term_sequence_range_sim_check;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 418; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_RecordPtr // : DrRecordPtr
	{
		summoned_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}