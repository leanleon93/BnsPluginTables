/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill3_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct skill3_action_Record : skill3_Record
	{
	public:
		signed char action_type;
char Pad_sub_0[3];
__int32 max_hyper_energy_point;
__int16 consume_hyper_energy_point;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}