/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_constellation_star_option_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct constellation_star_option_ability_Record : constellation_star_option_Record
	{
	public:
		__int8 modify_ability;
char Pad_sub_0[3];
__int32 modify_ability_value_min;
__int32 modify_ability_value_max;
__int32 modify_ability_base_value_min;
__int32 modify_ability_base_value_max;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}