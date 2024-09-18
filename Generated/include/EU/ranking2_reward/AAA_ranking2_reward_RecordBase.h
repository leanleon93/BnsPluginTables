/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int item_tableId(){return 189;};
__int32 item_count[4];
__int16 combat_exp_bonus_rate;
__int16 duel_point_bonus_rate;
__int16 party_battle_point_bonus_rate;
__int16 field_point_bonus_rate;
__int32 guild_bank_money;
__int8 guild_bank_item[5];
char Pad0[3];
__int32 guild_bank_item_count[5];
BnsTables::Shared::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId(){return 111;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 298; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}