/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct quest_not_acquire_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char zone_index;
char Pad0[3];
wchar_t* kismet;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_not_acquire_RecordPtr // : DrRecordPtr
	{
		quest_not_acquire_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}