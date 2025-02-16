/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct loadingimage_Record : BnsTables::Shared::DrEl
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
__int32 zone_id;
BnsTables::Shared::ExplicitTableRef zone_attraction;
signed char level_min;
signed char level_max;
signed char job;
char Pad0[1];
wchar_t* back_ground;
signed char count_back_ground;
bool editable;
char Pad1[2];
wchar_t* guide_text_ref;
__int16 guide_text_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 244; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) loadingimage_RecordPtr // : DrRecordPtr
	{
		loadingimage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}