/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_content_quota_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct content_quota_specific_target_Record : content_quota_Record
	{
	public:
		bool modifiable_by_admin;
signed char detail_content_name_by_admin;

		static __int32 SubType() { return 362; }
	};
#pragma pack(pop)
}