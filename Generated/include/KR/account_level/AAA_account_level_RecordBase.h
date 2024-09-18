/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct account_level_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};
__int64 exp;
__int8 ability[8];
__int32 ability_value[8];
__int32 ability_base_value[8];
__int8 badge_slot_quota_category1_premium;
__int8 badge_slot_quota_category1_normal;
__int8 badge_slot_quota_category2_premium;
__int8 badge_slot_quota_category2_normal;
__int8 badge_slot_quota_category3_premium;
__int8 badge_slot_quota_category3_normal;
__int8 badge_page;
__int8 badge_inventory_size;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 4; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) account_level_RecordPtr // : DrRecordPtr
	{
		account_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::account_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}