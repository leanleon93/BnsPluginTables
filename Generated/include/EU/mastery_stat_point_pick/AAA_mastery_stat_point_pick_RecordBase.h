/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct mastery_stat_point_pick_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 stat_point_pick_attribute;
__int8 stat_point_tier;
__int8 stat_point_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 required_stat_point;
char Pad0[2];
BnsTables::Shared::TableRef effect;
int effect_tableId(){return 111;};
BnsTables::Shared::TableRef description;
int description_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 248; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_pick_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_pick_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_stat_point_pick_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}