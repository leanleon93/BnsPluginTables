/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_portal_Record : zoneenv2_Record
	{
	public:
		__int8 portal_type;
char Pad_sub_0[3];
Data::TableRef transit_zone;
int transit_zone_tableId(){return 443;};
Data::TableRef transit_dungeon;
int transit_dungeon_tableId(){return 110;};
bool transit_reentrance_pcspawn;
char Pad_sub_1[1];
__int16 transit_pc_spawn;
Data::TableRef transit_pc_spawn_in_arena;
int transit_pc_spawn_in_arena_tableId(){return 452;};
Data::TableRef transit_leave_cinematic;
int transit_leave_cinematic_tableId(){return 56;};
Data::TableRef transit_enter_cinematic;
int transit_enter_cinematic_tableId(){return 56;};
Data::TableRef effect[8];
int effect_tableId(){return 111;};
Data::TableRef transit_leave_social;
int transit_leave_social_tableId(){return 367;};
Data::TableRef transit_enter_social;
int transit_enter_social_tableId(){return 367;};
__int8 required_level;

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}