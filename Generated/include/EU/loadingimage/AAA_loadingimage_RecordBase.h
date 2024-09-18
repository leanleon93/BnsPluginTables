/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct loadingimage_Record : BnsTables::Shared::DrEl
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
__int32 zone_id;
BnsTables::Shared::ExplicitTableRef zone_attraction;
__int8 level_min;
__int8 level_max;
__int8 job;
char Pad0[1];
wchar_t* back_ground;
__int8 count_back_ground;
bool editable;
char Pad1[2];
wchar_t* guide_text_ref;
__int16 guide_text_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 234; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) loadingimage_RecordPtr // : DrRecordPtr
	{
		loadingimage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::loadingimage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}