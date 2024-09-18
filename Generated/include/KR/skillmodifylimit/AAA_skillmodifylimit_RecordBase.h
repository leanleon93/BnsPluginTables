/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillmodifylimit_Record : BnsTables::Shared::DrEl
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
__int16 recycle_duration_min_ratio_percent;
__int16 recycle_duration_max_ratio_percent;
__int16 damage_power_percent_min_ratio_percent;
__int16 damage_power_percent_max_ratio_percent;
__int16 hp_drain_percent_min_ratio_percent;
__int16 hp_drain_percent_max_ratio_percent;
__int16 heal_percent_min_ratio_percent;
__int16 heal_percent_max_ratio_percent;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 354; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillmodifylimit_RecordPtr // : DrRecordPtr
	{
		skillmodifylimit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillmodifylimit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}