/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_content_quota_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct content_quota_vitality_Record : content_quota_Record
	{
	public:
		BnsTables::Shared::TableRef following;
int following_tableId() const {return 69;};
BnsTables::Shared::TableRef delayed;
int delayed_tableId() const {return 69;};
__int32 exp_boost_ratio;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}