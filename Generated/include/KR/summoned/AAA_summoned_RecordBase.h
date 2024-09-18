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
                __int8 race;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 id;
__int8 sex;
__int8 summoned_type;
__int8 brain_type;
char Pad0[1];
__int16 combat_follow_distance;
__int16 far_event_distance;
__int8 far_event_action_type;
char Pad1[1];
__int16 radius;
bool trace_master_skill_target;
char Pad2[3];
BnsTables::Shared::TableRef summoned_sequence;
int summoned_sequence_tableId(){return 410;};
__int32 seq_skill[10];
__int32 spawn_skill_id;
__int8 immune_skill_attribute[4];
__int16 immune_effect_attribute[8];
__int8 stance;
char Pad3[3];
__int32 lifetime_duration;
__int16 max_speed_near_master;
__int16 min_distance_to_lerp_speed;
__int16 max_distance_to_lerp_speed;
__int16 speed;
bool use_customized_appearance;
char Pad4[3];
BnsTables::Shared::TableRef appearance;
int appearance_tableId(){return 85;};
wchar_t* animset;
BnsTables::Shared::TableRef spawn_social;
int spawn_social_tableId(){return 382;};
BnsTables::Shared::TableRef respawn_in_social;
int respawn_in_social_tableId(){return 382;};
BnsTables::Shared::TableRef respawn_out_social;
int respawn_out_social_tableId(){return 382;};
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
int fixed_name_tableId(){return 420;};
BnsTables::Shared::TableRef nameplate_title_state_normal;
int nameplate_title_state_normal_tableId(){return 420;};
BnsTables::Shared::TableRef nameplate_title_state_duel_other_team;
int nameplate_title_state_duel_other_team_tableId(){return 420;};
BnsTables::Shared::TableRef nameplate_name_state_anonymity;
int nameplate_name_state_anonymity_tableId(){return 420;};
BnsTables::Shared::TableRef nameplate_name_state_duel_other_team;
int nameplate_name_state_duel_other_team_tableId(){return 420;};
float term_sequence_range_sim_check;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 403; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_RecordPtr // : DrRecordPtr
	{
		summoned_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoned_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}