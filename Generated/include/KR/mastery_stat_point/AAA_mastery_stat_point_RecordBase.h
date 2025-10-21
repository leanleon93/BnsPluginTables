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
                signed char stat_point_attribute;
char Pad_key_0[1];
__int16 stat_point;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef stat_effect;
int stat_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef event_effect[4];
__int32 event_effect_Size() const {return 4;};
int event_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 268; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}