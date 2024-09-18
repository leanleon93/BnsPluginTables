/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct indicator_idle_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef master_idle;
int master_idle_tableId(){return 266;};
BnsTables::Shared::TableRef npc[5];
int npc_tableId(){return 265;};
BnsTables::Shared::TableRef idle[5];
int idle_tableId(){return 266;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 183; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_idle_RecordPtr // : DrRecordPtr
	{
		indicator_idle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::indicator_idle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}