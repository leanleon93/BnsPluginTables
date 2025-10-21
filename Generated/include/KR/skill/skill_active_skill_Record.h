/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct skill_active_skill_Record : skill_Record
	{
	public:
		BnsTables::Shared::TableRef cast_condition;
int cast_condition_tableId() const {return 359;};
__int16 consume_sp_value;
char Pad_sub_0[2];
__int32 ui_next_combo;
signed char combo_start_point_flag;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}