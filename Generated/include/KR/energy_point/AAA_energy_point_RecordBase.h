/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct energy_point_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool enable_energy_point;
char Pad0[1];
__int16 ratio_of_point_to_exp;
__int32 acquired_max_energy_point;
__int32 acquired_max_energy_multiple_point;
__int8 multiple_value[8];
__int64 multiple_value_hidden;
BnsTables::Shared::TableRef additional_effect;
int additional_effect_tableId(){return 115;};
__int8 reset_hour;
__int8 reward_count;
char Pad1[2];
BnsTables::Shared::TableRef reward[127];
int reward_tableId(){return 120;};
BnsTables::Shared::TableRef goodsstore_search_item;
int goodsstore_search_item_tableId(){return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 119; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) energy_point_RecordPtr // : DrRecordPtr
	{
		energy_point_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::energy_point_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}