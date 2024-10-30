/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_buy_price_Record : BnsTables::Shared::DrEl
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
__int32 money;
BnsTables::Shared::TableRef required_itembrand;
int required_itembrand_tableId() const {return 189;};
signed char required_itembrand_condition_type;
char Pad0[3];
BnsTables::Shared::TableRef required_item[4];
__int32 required_item_Size() const {return 4;};
int required_item_tableId() const {return 195;};
__int16 required_item_count[4];
__int32 required_item_count_Size() const {return 4;};
__int32 required_faction_score;
__int32 required_duel_point;
__int32 required_party_battle_point;
__int32 required_field_play_point;
__int32 required_life_contents_point;
__int32 required_achievement_score;
__int32 required_achievement_id;
__int16 required_achievement_step_min;
__int16 faction_level;
signed char check_solo_duel_grade;
signed char check_team_duel_grade;
signed char check_battle_field_grade_occupation_war;
signed char check_battle_field_grade_capture_the_flag;
signed char check_battle_field_grade_lead_the_ball;
char Pad1[1];
__int16 check_closet_collecting_grade;
BnsTables::Shared::TableRef check_content_quota;
int check_content_quota_tableId() const {return 67;};
__int32 check_soul_boost_season_bm;
signed char required_level;
signed char required_mastery_level;
__int16 required_account_level;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 191; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_buy_price_RecordPtr // : DrRecordPtr
	{
		item_buy_price_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}