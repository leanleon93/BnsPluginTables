/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct pccafebenefits_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 code;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef effect;
int effect_tableId(){return 111;};
Data::TableRef duel_effect;
int duel_effect_tableId(){return 111;};
__int32 party_battle_point_bonus_percent;
__int32 party_battle_exp_bonus_percent;
__int32 duel_point_bonus_percent;
__int32 duel_exp_bonus_percent;
__int32 field_play_point_bonus_percent;
__int32 npc_looting_money_reward_percent;
__int8 weapon_accessory_transform_money_cost_discount_rate;
__int8 weapon_gem_transform_money_cost_discount_rate;
__int8 item_awakening_money_cost_discount_rate;
__int8 detach_weapon_gem_money_cost_discount_rate;
__int8 purify_item_discount_rate;
__int8 market_register_amount_tax_discount_rate;
bool unlocated_warehouse;
bool quest_reward;
__int32 quest_reward_account_exp_bonus_percent;
__int32 tendency_quest_reward_account_exp_bonus_percent;
__int32 challenge_reward_account_exp_bonus_percent;
__int8 pet_gem_transform_money_cost_discount_rate;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 266; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pccafebenefits_RecordPtr // : DrRecordPtr
	{
		pccafebenefits_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pccafebenefits_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}