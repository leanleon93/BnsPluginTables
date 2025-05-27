/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct world_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 world[10];
__int32 world_Size() const {return 10;};
BnsTables::Shared::TableRef lobby_desc;
int lobby_desc_tableId() const {return 427;};
bool steam;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 464; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_group_RecordPtr // : DrRecordPtr
	{
		world_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}