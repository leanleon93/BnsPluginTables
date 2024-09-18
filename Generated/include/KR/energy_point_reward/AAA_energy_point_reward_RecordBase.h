/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct energy_point_reward_Record : BnsTables::Shared::DrEl
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
		__int32 require_energy_point;
__int16 max_acquire_count;
__int8 reward_type;
char Pad0[1];
__int64 exp;
__int32 money_min;
__int32 money_max;
BnsTables::Shared::TableRef item[8];
int item_tableId(){return 195;};
__int16 item_count[8];
__int32 item_total_weight;
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 120; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) energy_point_reward_RecordPtr // : DrRecordPtr
	{
		energy_point_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::energy_point_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}