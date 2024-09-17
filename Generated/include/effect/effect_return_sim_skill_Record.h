/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_return_sim_skill_Record : effect_Record
	{
	public:
		Data::TableRef skill;
int skill_tableId(){return 335;};
Data::TableRef skill3;
int skill3_tableId(){return 324;};
bool finish;

		static __int32 SubType() { return 50; }
	};
#pragma pack(pop)
}