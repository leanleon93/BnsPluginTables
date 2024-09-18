/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct event_skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 stance_type;
__int8 skill_result;
__int8 event_type;
__int8 state;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill_1[2];
__int32 skill_2[12];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 124; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_skill_RecordPtr // : DrRecordPtr
	{
		event_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::event_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}