/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct energy_point_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 require_energy_point;
__int16 max_acquire_count;
signed char reward_type;
char Pad0[1];
__int64 exp;
__int32 money_min;
__int32 money_max;
BnsTables::Shared::TableRef item[8];
__int32 item_Size() const {return 8;};
int item_tableId() const {return 202;};
__int16 item_count[8];
__int32 item_count_Size() const {return 8;};
__int32 item_total_weight;
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 123; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) energy_point_reward_RecordPtr // : DrRecordPtr
	{
		energy_point_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}