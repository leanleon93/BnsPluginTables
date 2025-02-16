/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ranking2_reward_Record : BnsTables::Shared::DrEl
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
__int32 exp;
__int32 money;
BnsTables::Shared::TableRef item[4];
__int32 item_Size() const {return 4;};
int item_tableId() const {return 198;};
__int32 item_count[4];
__int32 item_count_Size() const {return 4;};
__int16 tax_reward_rate;
__int16 combat_exp_bonus_rate;
__int16 duel_point_bonus_rate;
__int16 party_battle_point_bonus_rate;
__int16 field_point_bonus_rate;
char Pad0[2];
__int32 guild_bank_money;
signed char guild_bank_item[5];
__int32 guild_bank_item_Size() const {return 5;};
char Pad1[3];
__int32 guild_bank_item_count[5];
__int32 guild_bank_item_count_Size() const {return 5;};
BnsTables::Shared::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId() const {return 115;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}