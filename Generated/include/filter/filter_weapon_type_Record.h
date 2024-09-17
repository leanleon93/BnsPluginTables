/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_weapon_type_Record : filter_Record
	{
	public:
		__int8 weapon_type[4];
bool either;

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}