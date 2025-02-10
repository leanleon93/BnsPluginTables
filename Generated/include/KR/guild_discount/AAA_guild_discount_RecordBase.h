/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guild_discount_Record : BnsTables::Shared::DrEl
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
signed char item_growth;
signed char item_awakening;
signed char weapon_tranform;
signed char accessory_tranform;
signed char weapon_gem_tranform;
signed char pet_gem_tranform;
signed char post_charge_discount_rate;
char Pad0[1];
__int32 post_charge_discount_max;
signed char detach_weapon_gem_money_cost_discount_rate;
signed char purify_item_discount_rate;
signed char item_improve;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 172; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_discount_RecordPtr // : DrRecordPtr
	{
		guild_discount_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}