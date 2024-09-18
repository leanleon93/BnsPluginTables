/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guild_discount_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 item_growth;
__int8 item_awakening;
__int8 weapon_tranform;
__int8 accessory_tranform;
__int8 weapon_gem_tranform;
__int8 pet_gem_tranform;
__int8 post_charge_discount_rate;
char Pad0[1];
__int32 post_charge_discount_max;
__int8 detach_weapon_gem_money_cost_discount_rate;
__int8 purify_item_discount_rate;
__int8 item_improve;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 167; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_discount_RecordPtr // : DrRecordPtr
	{
		guild_discount_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_discount_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}