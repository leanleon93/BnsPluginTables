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
		signed char count;
signed char job[4];
__int32 job_Size() const {return 4;};
signed char job_style[4];
__int32 job_style_Size() const {return 4;};
bool either;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}