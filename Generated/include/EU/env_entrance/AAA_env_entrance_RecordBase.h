/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct env_entrance_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};
wchar_t* title;
wchar_t* title_icon;
wchar_t* background_image;
BnsTables::Shared::TableRef attraction_btn_name[3];
__int32 attraction_btn_name_Size() const {return 3;};
int attraction_btn_name_tableId() const {return 435;};
BnsTables::Shared::TableRef attraction_btn_desc[3];
__int32 attraction_btn_desc_Size() const {return 3;};
int attraction_btn_desc_tableId() const {return 435;};
wchar_t* attraction_btn_image[3];
__int32 attraction_btn_image_Size() const {return 3;};
BnsTables::Shared::TableRef attraction_name_desc[3];
__int32 attraction_name_desc_Size() const {return 3;};
int attraction_name_desc_tableId() const {return 435;};
signed char season_contents_type;
char Pad0[3];
BnsTables::Shared::TableRef attraction_shortcut[3];
__int32 attraction_shortcut_Size() const {return 3;};
int attraction_shortcut_tableId() const {return 19;};
signed char ranking_contents_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 124; }
		static __int32 SubType() { return -1; }
		enum class season_contents_type {
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
		};

		enum class ranking_contents_type {
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
	struct __declspec(align(4)) env_entrance_RecordPtr // : DrRecordPtr
	{
		env_entrance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}