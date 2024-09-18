/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mastery_grade_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 level;
char Pad0[3];
wchar_t* image_tag;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 254; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_grade_RecordPtr // : DrRecordPtr
	{
		mastery_grade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_grade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}