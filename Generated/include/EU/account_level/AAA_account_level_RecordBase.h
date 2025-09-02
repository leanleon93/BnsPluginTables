/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int name_tableId() const {return 434;};
__int64 exp;
signed char ability[8];
__int32 ability_Size() const {return 8;};
__int32 ability_value[8];
__int32 ability_value_Size() const {return 8;};
__int32 ability_base_value[8];
__int32 ability_base_value_Size() const {return 8;};
signed char badge_slot_quota_category1_premium;
signed char badge_slot_quota_category1_normal;
signed char badge_slot_quota_category2_premium;
signed char badge_slot_quota_category2_normal;
signed char badge_slot_quota_category3_premium;
signed char badge_slot_quota_category3_normal;
signed char badge_page;
signed char badge_inventory_size;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 4; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) account_level_RecordPtr // : DrRecordPtr
	{
		account_level_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}