/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct duel_npc_challenge_Record : BnsTables::Shared::DrEl
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
		bool season_enable;
char Pad0[3];
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 461;};
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
__int8 required_level;
__int8 required_mastery_level;
char Pad1[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 294;};
__int8 required_preceding_quest_check;
char Pad2[1];
__int16 recommend_attack_power;
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 195;};
float center_x;
float center_y;
float center_z;
float radius;
__int32 duel_npc_spawn_delay;
__int32 ready_duration;
__int32 waiting_time;
__int32 stand_by_time;
__int32 choose_skill_time;
__int32 choose_skill_time_only;
__int32 wating_leave_time;
__int8 total_round;
char Pad3[1];
__int16 max_floor;
__int16 usable_floor;
char Pad4[2];
BnsTables::Shared::TableRef duel_npc_challenge_group[100];
int duel_npc_challenge_group_tableId(){return 111;};
__int32 card_select_delay_duration;
__int32 change_floor_delay_duration;
wchar_t* change_floor_kismet_name[10];
wchar_t* change_floor_show_name[10];
__int32 result_show_delay_duration;
wchar_t* scroll_boss_imageset;
wchar_t* countdown_sound_name;
__int8 active_strategic_skill_count;
__int8 passive_strategic_skill_count;
char Pad5[2];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef dungeon_name2;
int dungeon_name2_tableId(){return 420;};
BnsTables::Shared::TableRef dungeon_desc;
int dungeon_desc_tableId(){return 420;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
char Pad6[3];
BnsTables::Shared::TableRef display_quests[12];
int display_quests_tableId(){return 294;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId(){return 420;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 72;};
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId(){return 67;};
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId(){return 73;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 110; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_npc_challenge_RecordPtr // : DrRecordPtr
	{
		duel_npc_challenge_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_npc_challenge_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}