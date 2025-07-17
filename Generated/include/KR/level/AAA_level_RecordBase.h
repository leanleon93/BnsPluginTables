/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct level_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 exp;
__int32 exp_boost[3];
__int32 exp_boost_Size() const {return 3;};
__int32 exp_boost_recharge_time[3];
__int32 exp_boost_recharge_time_Size() const {return 3;};
signed char default_faction_score_acquire_level;
signed char half_faction_score_acquire_level;
char Pad0[2];
__int32 duel_death_match_1vs1_win_exp;
__int32 duel_death_match_1vs1_lose_draw_exp;
__int32 duel_death_match_1vs1_win_duel_point;
__int32 duel_death_match_1vs1_lose_draw_duel_point;
__int32 duel_tag_match_3vs3_win_exp;
__int32 duel_tag_match_3vs3_lose_draw_exp;
__int32 duel_tag_match_3vs3_win_duel_point;
__int32 duel_tag_match_3vs3_lose_draw_duel_point;
__int32 party_battle_occupation_war_win_exp;
__int32 party_battle_occupation_war_lose_draw_exp;
__int32 party_battle_occupation_war_win_party_battle_point;
__int32 party_battle_occupation_war_lose_draw_party_battle_point;
__int32 party_battle_capture_the_flag_win_exp;
__int32 party_battle_capture_the_flag_lose_draw_exp;
__int32 party_battle_capture_the_flag_win_party_battle_point;
__int32 party_battle_capture_the_flag_lose_draw_party_battle_point;
__int32 party_battle_lead_the_ball_win_exp;
__int32 party_battle_lead_the_ball_lose_draw_exp;
__int32 party_battle_lead_the_ball_win_party_battle_point;
__int32 party_battle_lead_the_ball_lose_draw_party_battle_point;
__int32 exp_boost_sum[3];
__int32 exp_boost_sum_Size() const {return 3;};
__int32 express_cost;
__int32 tencent_vitality_max[4];
__int32 tencent_vitality_max_Size() const {return 4;};
wchar_t* level_guide_path;
BnsTables::Shared::TableRef exceed_level_quest;
int exceed_level_quest_tableId() const {return 306;};
signed char exceed_level_next_level;
char Pad1[1];
__int16 teleport_price_level_weight;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 247; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) level_RecordPtr // : DrRecordPtr
	{
		level_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}