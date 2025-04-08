/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct zoneenv2_portal_Record : zoneenv2_Record
	{
	public:
		char Pad_sub_0[2];
signed char portal_type;
char Pad_sub_1[3];
BnsTables::Shared::TableRef transit_zone;
int transit_zone_tableId() const {return 471;};
BnsTables::Shared::TableRef transit_dungeon;
int transit_dungeon_tableId() const {return 114;};
bool transit_reentrance_pcspawn;
char Pad_sub_2[1];
__int16 transit_pc_spawn;
BnsTables::Shared::TableRef transit_pc_spawn_in_arena;
int transit_pc_spawn_in_arena_tableId() const {return 480;};
BnsTables::Shared::TableRef transit_leave_cinematic;
int transit_leave_cinematic_tableId() const {return 57;};
BnsTables::Shared::TableRef transit_enter_cinematic;
int transit_enter_cinematic_tableId() const {return 57;};
BnsTables::Shared::TableRef effect[8];
__int32 effect_Size() const {return 8;};
int effect_tableId() const {return 115;};
BnsTables::Shared::TableRef transit_leave_social;
int transit_leave_social_tableId() const {return 389;};
BnsTables::Shared::TableRef transit_enter_social;
int transit_enter_social_tableId() const {return 389;};
signed char required_level;

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}