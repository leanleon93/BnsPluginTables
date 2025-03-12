/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct mileageplan_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 mileage_plan_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool usable;
char Pad0[3];
BnsTables::Shared::TableRef gemstone;
int gemstone_tableId() const {return 198;};
__int16 gemstone_amount;
char Pad1[2];
BnsTables::Shared::TableRef abrasive;
int abrasive_tableId() const {return 198;};
__int16 abrasive_amount;
char Pad2[2];
__int32 base_mileage;
__int16 bonus_mileage_min;
__int16 bonus_mileage_max;
__int16 bonus_mileage_scale;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 265; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mileageplan_RecordPtr // : DrRecordPtr
	{
		mileageplan_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}