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
int zone_tableId() const {return 480;};
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char required_level;
signed char required_mastery_level;
char Pad1[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 307;};
signed char required_preceding_quest_check;
char Pad2[1];
__int16 recommend_attack_power;
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 202;};
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
signed char total_round;
char Pad3[1];
__int16 max_floor;
__int16 usable_floor;
char Pad4[2];
BnsTables::Shared::TableRef duel_npc_challenge_group[100];
__int32 duel_npc_challenge_group_Size() const {return 100;};
int duel_npc_challenge_group_tableId() const {return 114;};
__int32 card_select_delay_duration;
__int32 change_floor_delay_duration;
wchar_t* change_floor_kismet_name[10];
__int32 change_floor_kismet_name_Size() const {return 10;};
wchar_t* change_floor_show_name[10];
__int32 change_floor_show_name_Size() const {return 10;};
__int32 result_show_delay_duration;
wchar_t* scroll_boss_imageset;
wchar_t* countdown_sound_name;
signed char active_strategic_skill_count;
signed char passive_strategic_skill_count;
char Pad5[2];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef dungeon_name2;
int dungeon_name2_tableId() const {return 435;};
BnsTables::Shared::TableRef dungeon_desc;
int dungeon_desc_tableId() const {return 435;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char ui_text_grade;
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
char Pad6[3];
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 307;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 435;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId() const {return 69;};
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 75;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 113; }
		static __int32 SubType() { return -1; }
		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_npc_challenge_RecordPtr // : DrRecordPtr
	{
		duel_npc_challenge_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}