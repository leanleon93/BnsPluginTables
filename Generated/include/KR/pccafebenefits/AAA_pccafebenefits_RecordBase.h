/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pccafebenefits_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char code;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 118;};
BnsTables::Shared::TableRef duel_effect;
int duel_effect_tableId() const {return 118;};
__int32 party_battle_point_bonus_percent;
__int32 party_battle_exp_bonus_percent;
__int32 duel_point_bonus_percent;
__int32 duel_exp_bonus_percent;
__int32 field_play_point_bonus_percent;
__int32 npc_looting_money_reward_percent;
signed char weapon_accessory_transform_money_cost_discount_rate;
signed char weapon_gem_transform_money_cost_discount_rate;
signed char item_awakening_money_cost_discount_rate;
signed char detach_weapon_gem_money_cost_discount_rate;
signed char purify_item_discount_rate;
signed char market_register_amount_tax_discount_rate;
bool unlocated_warehouse;
bool quest_reward;
__int32 quest_reward_account_exp_bonus_percent;
__int32 tendency_quest_reward_account_exp_bonus_percent;
__int32 challenge_reward_account_exp_bonus_percent;
signed char pet_gem_transform_money_cost_discount_rate;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 288; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pccafebenefits_RecordPtr // : DrRecordPtr
	{
		pccafebenefits_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}