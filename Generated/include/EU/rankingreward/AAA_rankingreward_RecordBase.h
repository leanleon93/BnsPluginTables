/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct rankingreward_Record : BnsTables::Shared::DrEl
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
__int32 week_reward_exp;
__int32 week_reward_money;
BnsTables::Shared::TableRef week_reward_item[4];
__int32 week_reward_item_Size() const {return 4;};
int week_reward_item_tableId() const {return 202;};
__int32 week_reward_item_amount[4];
__int32 week_reward_item_amount_Size() const {return 4;};
__int32 season_reward_exp;
__int32 season_reward_money;
BnsTables::Shared::TableRef season_reward_item[4];
__int32 season_reward_item_Size() const {return 4;};
int season_reward_item_tableId() const {return 202;};
__int32 season_reward_item_amount[4];
__int32 season_reward_item_amount_Size() const {return 4;};
__int16 week_reward_combat_exp_bonus_rate;
__int16 week_reward_duel_point_bonus_rate;
__int16 week_reward_party_battle_point_bonus_rate;
__int16 week_reward_field_point_bonus_rate;
__int16 season_reward_combat_exp_bonus_rate;
__int16 season_reward_duel_point_bonus_rate;
__int16 season_reward_party_battle_point_bonus_rate;
__int16 season_reward_field_point_bonus_rate;
__int32 season_reward_guild_bank_money;
signed char season_reward_guild_bank_item[5];
__int32 season_reward_guild_bank_item_Size() const {return 5;};
char Pad0[3];
__int32 season_reward_guild_bank_item_amount[5];
__int32 season_reward_guild_bank_item_amount_Size() const {return 5;};
BnsTables::Shared::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId() const {return 118;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 332; }
		static __int32 SubType() { return -1; }
		enum class season_reward_guild_bank_item {
			none = 0,
			gemstone = 1,
			moonstone = 2,
			tokeniron = 3,
			tokensilver = 4,
			tokengold = 5,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingreward_RecordPtr // : DrRecordPtr
	{
		rankingreward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}