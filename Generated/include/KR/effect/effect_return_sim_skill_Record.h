/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_return_sim_skill_Record : effect_Record
	{
	public:
		BnsTables::Shared::TableRef skill;
int skill_tableId() const {return 362;};
BnsTables::Shared::TableRef skill3;
int skill3_tableId() const {return 349;};
bool finish;

		static __int32 SubType() { return 50; }
	};
#pragma pack(pop)
}