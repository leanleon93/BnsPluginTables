/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_field_zone_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct field_zone_guild_battle_field_entrance_Record : field_zone_Record
	{
	public:
		BnsTables::Shared::TableRef guild_battle_field_zone;
int guild_battle_field_zone_tableId() const {return 165;};
signed char min_fixed_channel;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}