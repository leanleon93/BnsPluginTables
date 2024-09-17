/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_content_quota_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct content_quota_vitality_Record : content_quota_Record
	{
	public:
		Data::TableRef following;
int following_tableId(){return 66;};
Data::TableRef delayed;
int delayed_tableId(){return 66;};
__int32 exp_boost_ratio;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}