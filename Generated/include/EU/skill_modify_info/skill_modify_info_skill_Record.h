/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_modify_info_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct skill_modify_info_skill_Record : skill_modify_info_Record
	{
	public:
		__int32 parent_skill3_id[4];
__int32 parent_skill3_id_Size() const {return 4;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}