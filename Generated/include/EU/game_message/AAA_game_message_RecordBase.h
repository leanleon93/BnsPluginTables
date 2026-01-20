/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct game_message_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char category;
char Pad0[3];
BnsTables::Shared::TableRef text;
int text_tableId() const {return 438;};
bool chatting;
char Pad1[3];
wchar_t* chatting_fontset;
bool headline2;
char Pad2[3];
wchar_t* headline2_fontset;
BnsTables::Shared::TableRef headline_text;
int headline_text_tableId() const {return 438;};
wchar_t* headline_fontset;
wchar_t* headline_particle;
BnsTables::Shared::TableRef boss_headline_text;
int boss_headline_text_tableId() const {return 438;};
wchar_t* boss_headline_fontset;
signed char sound_track;
bool stop_previous_track_sound;
bool duplication_check;
char Pad3[1];
wchar_t* sound;
signed char sound_type;
char Pad4[3];
wchar_t* sound2;
signed char sound2_type;
signed char guild_battle_type;
char Pad5[2];
BnsTables::Shared::TableRef guild_battle_text;
int guild_battle_text_tableId() const {return 438;};
signed char ghost_mode_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 160; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			chat_sight = 1,
			chat_party = 2,
			chat_team = 3,
			chat_team_leader = 4,
			chat_one = 5,
			chat_in_domain = 6,
			chat_world = 7,
			chat_faction = 8,
			chat_guild = 9,
			chat_guild_manager = 10,
			chat_party_search = 11,
			chat_npc = 12,
			chat_godsay_normal = 13,
			chat_godsay_campaign = 14,
			chat_godsay_emergency = 15,
			chat_field_dungeon = 16,
			chat_qq_c2c = 17,
			chat_qq_group = 18,
			chat_guild_search = 19,
			chat_watch = 20,
			chat_friends = 21,
			default_val = 22,
			warning = 23,
			info = 24,
			party = 25,
			party_match = 26,
			team = 27,
			faction = 28,
			guild = 29,
			guild_match = 30,
			exhaustion = 31,
			exhaustion_pc = 32,
			exp_acquisition = 33,
			exp_loss = 34,
			levelup = 35,
			money_acquisition = 36,
			money_loss = 37,
			item_acquisition = 38,
			item_loss = 39,
			skill_build_up_point_acquisition = 40,
			quest_acquisition = 41,
			quest_complete = 42,
			talk_social = 43,
			field_dungeon = 44,
			qq = 45,
			combat_normal = 46,
			combat_critical = 47,
			combat_heal = 48,
			combat_defend = 49,
			combat_parry = 50,
			combat_abnormal = 51,
			combat_attacked_normal = 52,
			combat_attacked_critical = 53,
			combat_target_heal = 54,
			combat_target_defend = 55,
			combat_target_abnormal = 56,
			combat_other_normal = 57,
			combat_other_critical = 58,
			combat_other_heal = 59,
			combat_other_defend = 60,
			combat_other_abnormal = 61,
			combat_party_normal = 62,
			combat_party_critical = 63,
			combat_party_heal = 64,
			combat_party_defend = 65,
			combat_party_abnormal = 66,
			combat_party_attacked_normal = 67,
			combat_party_attacked_critical = 68,
			combat_party_target_defend = 69,
			mentoring = 70,
			skill = 71,
			collecting_change_ability = 72,
		};

		enum class sound_track {
			none = 0,
			value_1 = 1,
			value_2 = 2,
		};

		enum class sound_type {
			none = 0,
			voice = 1,
			effect = 2,
		};

		enum class guild_battle_type {
			none = 0,
			value_1 = 1,
			value_2 = 2,
			value_3 = 3,
			value_4 = 4,
			value_5 = 5,
		};

		enum class ghost_mode_type {
			none = 0,
			normal = 1,
			ghost = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_message_RecordPtr // : DrRecordPtr
	{
		game_message_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}