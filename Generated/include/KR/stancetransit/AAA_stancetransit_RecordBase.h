/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct stancetransit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char before_stance;
bool before_combat;
signed char after_stance;
bool after_combat;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* transit_anim;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 398; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) stancetransit_RecordPtr // : DrRecordPtr
	{
		stancetransit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}