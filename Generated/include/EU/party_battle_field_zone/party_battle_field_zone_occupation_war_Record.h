/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct party_battle_field_zone_occupation_war_Record : party_battle_field_zone_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef control_point[5];
__int32 control_point_Size() const {return 5;};
int control_point_tableId() const {return 481;};
__int16 whole_occupation_bonus_score;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}