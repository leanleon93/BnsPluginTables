/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct terrain_Record : BnsTables::Shared::DrEl
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
wchar_t* umap_name;
__int16 terrain_start_x;
__int16 terrain_start_y;
__int16 count_x;
__int16 count_y;
__int32 terrain_origin_x;
__int32 terrain_origin_y;
wchar_t* description;
bool skip_cooking;
char Pad0[1];
__int16 release_contents_group;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 419; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) terrain_RecordPtr // : DrRecordPtr
	{
		terrain_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::terrain_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}