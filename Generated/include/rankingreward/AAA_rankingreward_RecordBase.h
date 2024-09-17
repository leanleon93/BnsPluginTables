/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct rankingreward_Record : DrEl
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
Data::TableRef week_reward_item[4];
int week_reward_item_tableId(){return 189;};
__int32 week_reward_item_amount[4];
__int32 season_reward_exp;
__int32 season_reward_money;
Data::TableRef season_reward_item[4];
int season_reward_item_tableId(){return 189;};
__int32 season_reward_item_amount[4];
__int16 week_reward_combat_exp_bonus_rate;
__int16 week_reward_duel_point_bonus_rate;
__int16 week_reward_party_battle_point_bonus_rate;
__int16 week_reward_field_point_bonus_rate;
__int16 season_reward_combat_exp_bonus_rate;
__int16 season_reward_duel_point_bonus_rate;
__int16 season_reward_party_battle_point_bonus_rate;
__int16 season_reward_field_point_bonus_rate;
__int32 season_reward_guild_bank_money;
__int8 season_reward_guild_bank_item[5];
char Pad0[3];
__int32 season_reward_guild_bank_item_amount[5];
Data::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 305; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingreward_RecordPtr // : DrRecordPtr
	{
		rankingreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::rankingreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}