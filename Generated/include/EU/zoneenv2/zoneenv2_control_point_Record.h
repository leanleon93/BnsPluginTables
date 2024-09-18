/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct zoneenv2_control_point_Record : zoneenv2_Record
	{
	public:
		BnsTables::Shared::TableRef manipulation_required_field_item;
int manipulation_required_field_item_tableId(){return 137;};
BnsTables::Shared::TableRef manipulation_drop_field_item;
int manipulation_drop_field_item_tableId(){return 138;};
__int16 occupation_zone_score;
__int16 occupation_bonus_zone_score_per_sec;
wchar_t* friend_occupation_additive_effect;
wchar_t* enemy_occupation_additive_effect;
wchar_t* friend_occupation_additive_sound;
wchar_t* enemy_occupation_additive_sound;

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}