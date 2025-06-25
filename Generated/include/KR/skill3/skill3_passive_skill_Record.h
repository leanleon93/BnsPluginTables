/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill3_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct skill3_passive_skill_Record : skill3_Record
	{
	public:
		BnsTables::Shared::TableRef passive_effect[8];
__int32 passive_effect_Size() const {return 8;};
int passive_effect_tableId() const {return 118;};
signed char summoned_job;
bool summoned_use_only;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}