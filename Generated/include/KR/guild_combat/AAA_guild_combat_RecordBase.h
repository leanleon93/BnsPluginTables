/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guild_combat_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char season_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char required_level;
char Pad0[1];
__int16 required_mastery_level;
BnsTables::Shared::TableRef available_matching_weekly_time;
int available_matching_weekly_time_tableId() const {return 461;};
__int16 party_battle_point_bonus_rate;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 173; }
		static __int32 SubType() { return -1; }
		enum class season_type {
			invalid = 0,
			duel_death_match_1vs1 = 1,
			duel_death_match_3vs3 = 2,
			duel_tag_match_3vs3 = 3,
			party_battle_occupation_war = 4,
			solo_dungeon_1_best_record = 5,
			infinite_tower_best_record = 6,
			party_battle_capture_the_flag = 7,
			guild_combat = 8,
			solo_dungeon_2_best_record = 9,
			ingame_championship_duel_death_match_1vs1 = 10,
			ingame_championship_duel_tag_match_3vs3 = 11,
			party_battle_lead_the_ball = 12,
			challenge_party_best_record = 13,
			battle_royal_free_for_all = 14,
			battle_royal_free_for_all_party = 15,
			mastery_exp_best_record = 16,
			sealed_dungeon_total = 17,
			sealed_dungeon_1 = 18,
			sealed_dungeon_2 = 19,
			sealed_dungeon_3 = 20,
			sealed_dungeon_4 = 21,
			sealed_dungeon_5 = 22,
			sealed_dungeon_6 = 23,
			wave_dungeon_1 = 24,
			wave_dungeon_2 = 25,
			solo_dungeon_3_best_record = 26,
			solo_dungeon_4_best_record = 27,
			solo_dungeon_5_best_record = 28,
			tier_total = 29,
			hyper_racing_game = 30,
			duel_npc_challenge = 31,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_combat_RecordPtr // : DrRecordPtr
	{
		guild_combat_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}