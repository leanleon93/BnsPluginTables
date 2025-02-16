/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_modify_damage_systematization_Record : effect_Record
	{
	public:
		BnsTables::Shared::TableRef systematization;
int systematization_tableId() const {return 367;};
__int16 damage_rate;

		static __int32 SubType() { return 954; }
	};
#pragma pack(pop)
}