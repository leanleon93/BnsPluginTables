/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct fieldbossspawn_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef npc;
int npc_tableId(){return 265;};
BnsTables::Shared::TableRef spawn_alarm_message;
int spawn_alarm_message_tableId(){return 155;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 141; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fieldbossspawn_RecordPtr // : DrRecordPtr
	{
		fieldbossspawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fieldbossspawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}