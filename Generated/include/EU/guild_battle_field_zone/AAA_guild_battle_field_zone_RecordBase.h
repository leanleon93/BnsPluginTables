/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guild_battle_field_zone_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 479;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef effect[2];
__int32 effect_Size() const {return 2;};
int effect_tableId() const {return 118;};
BnsTables::Shared::TableRef respawn_effect;
int respawn_effect_tableId() const {return 118;};
__int32 respawn_delay;
BnsTables::Shared::TableRef refiner[3];
__int32 refiner_Size() const {return 3;};
int refiner_tableId() const {return 482;};
BnsTables::Shared::TableRef respawn_by_refiner[3];
__int32 respawn_by_refiner_Size() const {return 3;};
int respawn_by_refiner_tableId() const {return 489;};
BnsTables::Shared::TableRef airdash_1_by_refiner[3];
__int32 airdash_1_by_refiner_Size() const {return 3;};
int airdash_1_by_refiner_tableId() const {return 482;};
BnsTables::Shared::TableRef airdash_2_by_refiner[3];
__int32 airdash_2_by_refiner_Size() const {return 3;};
int airdash_2_by_refiner_tableId() const {return 482;};
BnsTables::Shared::TableRef guild_battle_field_zone_name2;
int guild_battle_field_zone_name2_tableId() const {return 434;};
BnsTables::Shared::TableRef guild_battle_field_zone_desc;
int guild_battle_field_zone_desc_tableId() const {return 434;};
wchar_t* thumbnail_image;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
BnsTables::Shared::TableRef last_boss;
int last_boss_tableId() const {return 276;};
__int16 pc_spawn_id[6];
__int32 pc_spawn_id_Size() const {return 6;};
signed char pc_spawn_id_count;
char Pad0[3];
BnsTables::Shared::TableRef gate_replica[6];
__int32 gate_replica_Size() const {return 6;};
int gate_replica_tableId() const {return 482;};
signed char gate_open_ready_minute;
signed char sun_gate_open_hour[12];
__int32 sun_gate_open_hour_Size() const {return 12;};
signed char sun_gate_open_minute[12];
__int32 sun_gate_open_minute_Size() const {return 12;};
char Pad1[1];
__int16 sun_gate_open_duration[12];
__int32 sun_gate_open_duration_Size() const {return 12;};
signed char sun_zone_open_hour;
signed char sun_zone_open_minute;
signed char sun_zone_close_hour;
signed char sun_zone_close_minute;
signed char mon_gate_open_hour[12];
__int32 mon_gate_open_hour_Size() const {return 12;};
signed char mon_gate_open_minute[12];
__int32 mon_gate_open_minute_Size() const {return 12;};
__int16 mon_gate_open_duration[12];
__int32 mon_gate_open_duration_Size() const {return 12;};
signed char mon_zone_open_hour;
signed char mon_zone_open_minute;
signed char mon_zone_close_hour;
signed char mon_zone_close_minute;
signed char tue_gate_open_hour[12];
__int32 tue_gate_open_hour_Size() const {return 12;};
signed char tue_gate_open_minute[12];
__int32 tue_gate_open_minute_Size() const {return 12;};
__int16 tue_gate_open_duration[12];
__int32 tue_gate_open_duration_Size() const {return 12;};
signed char tue_zone_open_hour;
signed char tue_zone_open_minute;
signed char tue_zone_close_hour;
signed char tue_zone_close_minute;
signed char wed_gate_open_hour[12];
__int32 wed_gate_open_hour_Size() const {return 12;};
signed char wed_gate_open_minute[12];
__int32 wed_gate_open_minute_Size() const {return 12;};
__int16 wed_gate_open_duration[12];
__int32 wed_gate_open_duration_Size() const {return 12;};
signed char wed_zone_open_hour;
signed char wed_zone_open_minute;
signed char wed_zone_close_hour;
signed char wed_zone_close_minute;
signed char thu_gate_open_hour[12];
__int32 thu_gate_open_hour_Size() const {return 12;};
signed char thu_gate_open_minute[12];
__int32 thu_gate_open_minute_Size() const {return 12;};
__int16 thu_gate_open_duration[12];
__int32 thu_gate_open_duration_Size() const {return 12;};
signed char thu_zone_open_hour;
signed char thu_zone_open_minute;
signed char thu_zone_close_hour;
signed char thu_zone_close_minute;
signed char fri_gate_open_hour[12];
__int32 fri_gate_open_hour_Size() const {return 12;};
signed char fri_gate_open_minute[12];
__int32 fri_gate_open_minute_Size() const {return 12;};
__int16 fri_gate_open_duration[12];
__int32 fri_gate_open_duration_Size() const {return 12;};
signed char fri_zone_open_hour;
signed char fri_zone_open_minute;
signed char fri_zone_close_hour;
signed char fri_zone_close_minute;
signed char sat_gate_open_hour[12];
__int32 sat_gate_open_hour_Size() const {return 12;};
signed char sat_gate_open_minute[12];
__int32 sat_gate_open_minute_Size() const {return 12;};
__int16 sat_gate_open_duration[12];
__int32 sat_gate_open_duration_Size() const {return 12;};
signed char sat_zone_open_hour;
signed char sat_zone_open_minute;
signed char sat_zone_close_hour;
signed char sat_zone_close_minute;
signed char required_level_min;
signed char required_level_max;
__int16 required_faction_score;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 18); }
		static __int16 TableId() { return 171; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		guild_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}