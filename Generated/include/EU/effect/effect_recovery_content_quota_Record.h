/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct effect_recovery_content_quota_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
__int32 content_quota_id;
__int16 value;
char Pad_sub_1[2];
__int32 restrict_quota_id;

		static __int32 SubType() { return 54; }
	};
#pragma pack(pop)
}