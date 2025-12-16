/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct quest_transit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char id;
char Pad0[3];
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 480;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_transit_RecordPtr // : DrRecordPtr
	{
		quest_transit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}