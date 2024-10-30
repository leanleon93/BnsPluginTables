/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct indicator_image_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 indicator;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* mesh_iconset;
wchar_t* minimap;
wchar_t* minimap_over;
wchar_t* minimap_boder;
wchar_t* minimap_boder_over;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 30); }
		static __int16 TableId() { return 184; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_image_RecordPtr // : DrRecordPtr
	{
		indicator_image_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}