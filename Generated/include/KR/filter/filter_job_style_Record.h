/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct filter_job_style_Record : filter_Record
	{
	public:
		__int8 count;
__int8 job[4];
__int8 job_style[4];
bool either;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}