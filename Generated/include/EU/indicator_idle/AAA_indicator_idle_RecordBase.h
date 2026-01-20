/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct indicator_idle_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef master_idle;
int master_idle_tableId() const {return 280;};
BnsTables::Shared::TableRef npc[5];
__int32 npc_Size() const {return 5;};
int npc_tableId() const {return 279;};
BnsTables::Shared::TableRef idle[5];
__int32 idle_Size() const {return 5;};
int idle_tableId() const {return 280;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 190; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_idle_RecordPtr // : DrRecordPtr
	{
		indicator_idle_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}