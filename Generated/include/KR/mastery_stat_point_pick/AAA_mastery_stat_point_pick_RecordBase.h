/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mastery_stat_point_pick_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stat_point_pick_attribute;
signed char stat_point_tier;
signed char stat_point_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 required_stat_point;
char Pad0[2];
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 118;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 268; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_pick_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_pick_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}