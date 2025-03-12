/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillshow3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_id;
char Pad_key_0[1];
__int16 skillskin_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool play_player_show;
bool force_play_hit_show;
char Pad0[2];
wchar_t* player_cast_show;
wchar_t* player_exec_show_1;
wchar_t* player_exec_show_2;
wchar_t* player_exec_show_3;
wchar_t* player_exec_show_4;
wchar_t* player_exec_show_5;
wchar_t* player_fire_show_1;
wchar_t* player_fire_show_2;
wchar_t* player_fire_show_3;
wchar_t* player_fire_show_4;
wchar_t* player_fire_show_5;
wchar_t* player_stop_show;
signed char chain_type;
signed char create_phantom_type;
signed char phantom_shoot_type;
signed char lyn_phantom_count;
bool succession_next_skill;
bool show_key_result_damage_signal;
char Pad1[2];
wchar_t* weapon_prefix;
bool cast_duration_zero_show_off;
bool range_decal;
bool use_berserk_range_decal;
char Pad2[1];
wchar_t* cast_show;
bool exec_show_play_end;
char Pad3[3];
wchar_t* decal_show_1;
wchar_t* fire_show_1;
wchar_t* fire_miss_show_1;
wchar_t* exec_show_1;
wchar_t* exec_hit_show_1;
wchar_t* exec_immune_show_1;
wchar_t* exec_dodge_show_1;
wchar_t* exec_parry_show_1;
wchar_t* exec_bounce_show_1;
wchar_t* exec_bounce_caster_show_1;
wchar_t* exec_counter_show_1;
wchar_t* exec_critical_show_1;
wchar_t* return_show_1;
wchar_t* decal_show_2;
wchar_t* fire_show_2;
wchar_t* fire_miss_show_2;
wchar_t* exec_show_2;
wchar_t* exec_hit_show_2;
wchar_t* exec_immune_show_2;
wchar_t* exec_dodge_show_2;
wchar_t* exec_parry_show_2;
wchar_t* exec_bounce_show_2;
wchar_t* exec_bounce_caster_show_2;
wchar_t* exec_counter_show_2;
wchar_t* exec_critical_show_2;
wchar_t* return_show_2;
wchar_t* decal_show_3;
wchar_t* fire_show_3;
wchar_t* fire_miss_show_3;
wchar_t* exec_show_3;
wchar_t* exec_hit_show_3;
wchar_t* exec_immune_show_3;
wchar_t* exec_dodge_show_3;
wchar_t* exec_parry_show_3;
wchar_t* exec_bounce_show_3;
wchar_t* exec_bounce_caster_show_3;
wchar_t* exec_counter_show_3;
wchar_t* exec_critical_show_3;
wchar_t* return_show_3;
wchar_t* decal_show_4;
wchar_t* fire_show_4;
wchar_t* fire_miss_show_4;
wchar_t* exec_show_4;
wchar_t* exec_hit_show_4;
wchar_t* exec_immune_show_4;
wchar_t* exec_dodge_show_4;
wchar_t* exec_parry_show_4;
wchar_t* exec_bounce_show_4;
wchar_t* exec_bounce_caster_show_4;
wchar_t* exec_counter_show_4;
wchar_t* exec_critical_show_4;
wchar_t* return_show_4;
wchar_t* decal_show_5;
wchar_t* fire_show_5;
wchar_t* fire_miss_show_5;
wchar_t* exec_show_5;
wchar_t* exec_hit_show_5;
wchar_t* exec_immune_show_5;
wchar_t* exec_dodge_show_5;
wchar_t* exec_parry_show_5;
wchar_t* exec_bounce_show_5;
wchar_t* exec_bounce_caster_show_5;
wchar_t* exec_counter_show_5;
wchar_t* exec_critical_show_5;
wchar_t* return_show_5;
wchar_t* finish_show;
wchar_t* bomb_show;
wchar_t* cancel_show;
wchar_t* stop_show;
wchar_t* triggered_show;
wchar_t* trigger_cast_show;
wchar_t* triggered_enemy_show;
wchar_t* trigger_show;
wchar_t* trigger_hit_show;
wchar_t* trigger_immune_show;
wchar_t* trigger_dodge_show;
wchar_t* trigger_parry_show;
wchar_t* trigger_bounce_show;
wchar_t* trigger_counter_show;
wchar_t* trigger_critical_show;
wchar_t* skill_skin_desc;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 10); }
		static __int16 TableId() { return 363; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillshow3_RecordPtr // : DrRecordPtr
	{
		skillshow3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}