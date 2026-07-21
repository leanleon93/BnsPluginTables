/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_pouch_light_pillar_Record : BnsTables::Shared::DrEl
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 221; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_pouch_light_pillar_RecordPtr // : DrRecordPtr
	{
		item_pouch_light_pillar_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}