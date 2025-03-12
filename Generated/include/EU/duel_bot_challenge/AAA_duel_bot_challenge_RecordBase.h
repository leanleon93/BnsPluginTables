/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class duel_bot_challenge_RecordSubType : __int32
    {
		duel_bot_challenge_record_sub_time_attack_mode = 0,
		duel_bot_challenge_record_sub_round_mode = 1,
		duel_bot_challenge_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct duel_bot_challenge_Record : BnsTables::Shared::DrEl
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
int zone_tableId() const {return 470;};
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 299;};
signed char required_preceding_quest_check;
char Pad1[1];
__int16 recommend_attack_power;
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 198;};
__int32 duel_bot_spawn_delay;
__int32 ready_duration;
__int16 floor_timeout_duration_second;
__int16 finish_time_section[10];
__int32 finish_time_section_Size() const {return 10;};
__int16 finish_time_section_floor_setup[10];
__int32 finish_time_section_floor_setup_Size() const {return 10;};
__int16 max_floor;
__int32 card_select_delay_duration;
__int32 change_floor_delay_duration;
wchar_t* change_floor_kismet_name[10];
__int32 change_floor_kismet_name_Size() const {return 10;};
wchar_t* change_floor_show_name[10];
__int32 change_floor_show_name_Size() const {return 10;};
__int32 result_show_delay_duration;
wchar_t* blade_master_floor_kismet_name;
wchar_t* kung_fu_fighter_floor_kismet_name;
wchar_t* force_master_floor_kismet_name;
wchar_t* destroyer_floor_kismet_name;
wchar_t* summoner_floor_kismet_name;
wchar_t* assassin_floor_kismet_name;
wchar_t* sword_master_floor_kismet_name;
wchar_t* warlock_floor_kismet_name;
wchar_t* soul_fighter_floor_kismet_name;
wchar_t* shooter_floor_kismet_name;
wchar_t* warrior_floor_kismet_name;
wchar_t* archer_floor_kismet_name;
wchar_t* spear_master_floor_kismet_name;
wchar_t* thunderer_floor_kismet_name;
wchar_t* dual_blader_floor_kismet_name;
wchar_t* bard_floor_kismet_name;
wchar_t* countdown_sound_name;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
BnsTables::Shared::TableRef dungeon_name2;
int dungeon_name2_tableId() const {return 427;};
BnsTables::Shared::TableRef dungeon_desc;
int dungeon_desc_tableId() const {return 427;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char ui_text_grade;
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
char Pad2[3];
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 299;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 427;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 72;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 41); }
		static __int16 TableId() { return 102; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_challenge_RecordPtr // : DrRecordPtr
	{
		duel_bot_challenge_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}