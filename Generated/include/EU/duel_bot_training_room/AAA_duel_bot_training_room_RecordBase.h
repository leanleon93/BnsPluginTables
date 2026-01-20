/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_bot_training_room_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 483;};
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 309;};
signed char required_preceding_quest_check;
char Pad1[3];
__int32 match_select_delay_duration;
__int32 spawn_kismet_delay_duration;
__int32 finish_delay_duration;
wchar_t* blade_master_spawn_kismet_name;
wchar_t* kung_fu_fighter_spawn_kismet_name;
wchar_t* force_master_spawn_kismet_name;
wchar_t* destroyer_spawn_kismet_name;
wchar_t* summoner_spawn_kismet_name;
wchar_t* assassin_spawn_kismet_name;
wchar_t* sword_master_spawn_kismet_name;
wchar_t* warlock_spawn_kismet_name;
wchar_t* soul_fighter_spawn_kismet_name;
wchar_t* shooter_spawn_kismet_name;
wchar_t* warrior_spawn_kismet_name;
wchar_t* archer_spawn_kismet_name;
wchar_t* spear_master_spawn_kismet_name;
wchar_t* thunderer_spawn_kismet_name;
wchar_t* dual_blader_spawn_kismet_name;
wchar_t* bard_spawn_kismet_name;
__int16 timeout_duration_second;
__int16 achievement_time_limit_second[2];
__int32 achievement_time_limit_second_Size() const {return 2;};
signed char ui_text_grade;
char Pad2[1];
BnsTables::Shared::TableRef dungeon_name2;
int dungeon_name2_tableId() const {return 438;};
BnsTables::Shared::TableRef dungeon_desc;
int dungeon_desc_tableId() const {return 438;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad3[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 203;};
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 309;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 438;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 109; }
		static __int32 SubType() { return -1; }
		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}