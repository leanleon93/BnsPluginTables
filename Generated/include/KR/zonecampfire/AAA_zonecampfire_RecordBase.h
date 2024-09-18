/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonecampfire_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef campfire;
int campfire_tableId(){return 47;};
BnsTables::Shared::XYZ position;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 458; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonecampfire_RecordPtr // : DrRecordPtr
	{
		zonecampfire_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonecampfire_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}