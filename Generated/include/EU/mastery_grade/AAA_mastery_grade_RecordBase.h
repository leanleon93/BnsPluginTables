/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct mastery_grade_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char level;
char Pad0[3];
wchar_t* image_tag;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 259; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_grade_RecordPtr // : DrRecordPtr
	{
		mastery_grade_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}