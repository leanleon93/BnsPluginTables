/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct automodereturnteleport_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* name;
BnsTables::Shared::TableRef teleport;
int teleport_tableId(){return 401;};
BnsTables::Shared::TableRef npc;
int npc_tableId(){return 255;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 24; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) automodereturnteleport_RecordPtr // : DrRecordPtr
	{
		automodereturnteleport_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::automodereturnteleport_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}