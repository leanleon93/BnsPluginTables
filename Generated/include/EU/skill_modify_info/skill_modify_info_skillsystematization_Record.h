/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_modify_info_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct skill_modify_info_skillsystematization_Record : skill_modify_info_Record
	{
	public:
		BnsTables::Shared::TableRef systematization;
int systematization_tableId() const {return 360;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}