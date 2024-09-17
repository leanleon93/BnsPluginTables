/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct mileageplan_Record : DrEl
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
Data::TableRef gemstone;
int gemstone_tableId(){return 189;};
__int16 gemstone_amount;
char Pad1[2];
Data::TableRef abrasive;
int abrasive_tableId(){return 189;};
__int16 abrasive_amount;
char Pad2[2];
__int32 base_mileage;
__int16 bonus_mileage_min;
__int16 bonus_mileage_max;
__int16 bonus_mileage_scale;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 250; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mileageplan_RecordPtr // : DrRecordPtr
	{
		mileageplan_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mileageplan_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}