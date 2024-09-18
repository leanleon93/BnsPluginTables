/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mastery_stat_point_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 stat_point_attribute;
__int16 stat_point;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef stat_effect;
int stat_effect_tableId(){return 115;};
BnsTables::Shared::TableRef event_effect[4];
int event_effect_tableId(){return 115;};
BnsTables::Shared::TableRef description;
int description_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 256; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_stat_point_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}