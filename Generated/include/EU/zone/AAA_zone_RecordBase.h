/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct zone_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated_zone;
char Pad0[3];
BnsTables::Shared::TableRef transfer_pcspawn_by_deprecated;
int transfer_pcspawn_by_deprecated_tableId(){return 452;};
BnsTables::Shared::TableRef chat_channel;
int chat_channel_tableId(){return 382;};
__int8 zone_type2;
char Pad1[3];
BnsTables::Shared::ExplicitTableRef attraction;
BnsTables::Shared::TableRef district;
int district_tableId(){return 100;};
__int16 sector_xmin;
__int16 sector_xmax;
__int16 sector_ymin;
__int16 sector_ymax;
__int16 pc_max;
__int16 pc_max_by_main_faction;
__int16 recommend_pc_count;
__int16 npc_max;
bool sight_cube;
char Pad2[1];
__int16 terrain;
__int16 region;
char Pad3[2];
BnsTables::Shared::TableRef respawn;
int respawn_tableId(){return 453;};
BnsTables::Shared::TableRef respawn_by_activated_faction_required_faction[2];
int respawn_by_activated_faction_required_faction_tableId(){return 130;};
BnsTables::Shared::TableRef respawn_by_activated_faction[2];
int respawn_by_activated_faction_tableId(){return 453;};
BnsTables::Shared::TableRef basecamp;
int basecamp_tableId(){return 439;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 405;};
wchar_t* kismet_name;
wchar_t* enter_kismet_name;
wchar_t* leave_kismet_name;
wchar_t* aiid;
BnsTables::Shared::TableRef reentrance_pcspawn;
int reentrance_pcspawn_tableId(){return 452;};
BnsTables::Shared::TableRef reentrance_pcspawn_in_arena;
int reentrance_pcspawn_in_arena_tableId(){return 452;};
BnsTables::Shared::TableRef sealed_dungeon_reentrance_pcspawn_in_arena;
int sealed_dungeon_reentrance_pcspawn_in_arena_tableId(){return 452;};
bool use_zone_exit;
char Pad4[3];
BnsTables::Shared::TableRef map;
int map_tableId(){return 240;};
BnsTables::Shared::TableRef area;
int area_tableId(){return 236;};
__int8 effect_link_type;
bool tutorial;
bool sharable_combatmode;
bool use_perfmon;
bool recharge_exp_boost;
bool available_sextet_party;
bool write_equipinfo_log;
__int8 phase_quest_count;
BnsTables::Shared::TableRef phase_quest[40];
int phase_quest_tableId(){return 283;};
__int8 phase_id[40];
BnsTables::Shared::TableRef phase_zone[17];
int phase_zone_tableId(){return 443;};
bool phase_zone_disable_in_arena[17];
bool default_phase_zone;
char Pad5[2];
BnsTables::Shared::TableRef phase_main_zone;
int phase_main_zone_tableId(){return 443;};
__int16 default_phase_pc_spawn_id;
__int8 dungeon_step;
bool is_arena_entrance;
__int8 enable_ghost_mode;
bool available_infield_contents;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(7, 1); }
		static __int16 TableId() { return 443; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zone_RecordPtr // : DrRecordPtr
	{
		zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}