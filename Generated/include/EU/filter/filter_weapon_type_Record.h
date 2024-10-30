/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct filter_weapon_type_Record : filter_Record
	{
	public:
		signed char weapon_type[4];
__int32 weapon_type_Size() const {return 4;};
bool either;

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}