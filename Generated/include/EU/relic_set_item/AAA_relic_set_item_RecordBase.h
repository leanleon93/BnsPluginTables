/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct relic_set_item_Record : BnsTables::Shared::DrEl
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
__int8 count_1_ability[8];
__int32 count_1_ability_value[8];
__int32 count_1_ability_base_value[8];
__int8 count_2_ability[8];
__int32 count_2_ability_value[8];
__int32 count_2_ability_base_value[8];
__int8 count_3_ability[8];
__int32 count_3_ability_value[8];
__int32 count_3_ability_base_value[8];
__int8 count_4_ability[8];
__int32 count_4_ability_value[8];
__int32 count_4_ability_base_value[8];
__int8 count_5_ability[8];
__int32 count_5_ability_value[8];
__int32 count_5_ability_base_value[8];
__int8 count_6_ability[8];
__int32 count_6_ability_value[8];
__int32 count_6_ability_base_value[8];
__int8 count_7_ability[8];
__int32 count_7_ability_value[8];
__int32 count_7_ability_base_value[8];
__int8 count_8_ability[8];
__int32 count_8_ability_value[8];
__int32 count_8_ability_base_value[8];
__int8 count_9_ability[8];
__int32 count_9_ability_value[8];
__int32 count_9_ability_base_value[8];
__int8 count_10_ability[8];
__int32 count_10_ability_value[8];
__int32 count_10_ability_base_value[8];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
BnsTables::Shared::TableRef set_item[15];
int set_item_tableId(){return 189;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 309; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_set_item_RecordPtr // : DrRecordPtr
	{
		relic_set_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_set_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}