/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guild_battle_field_zone_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef effect[2];
int effect_tableId(){return 111;};
Data::TableRef respawn_effect;
int respawn_effect_tableId(){return 111;};
__int32 respawn_delay;
Data::TableRef refiner[3];
int refiner_tableId(){return 446;};
Data::TableRef respawn_by_refiner[3];
int respawn_by_refiner_tableId(){return 453;};
Data::TableRef airdash_1_by_refiner[3];
int airdash_1_by_refiner_tableId(){return 446;};
Data::TableRef airdash_2_by_refiner[3];
int airdash_2_by_refiner_tableId(){return 446;};
Data::TableRef guild_battle_field_zone_name2;
int guild_battle_field_zone_name2_tableId(){return 405;};
Data::TableRef guild_battle_field_zone_desc;
int guild_battle_field_zone_desc_tableId(){return 405;};
wchar_t* thumbnail_image;
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
Data::TableRef last_boss;
int last_boss_tableId(){return 255;};
__int16 pc_spawn_id[6];
__int8 pc_spawn_id_count;
char Pad0[3];
Data::TableRef gate_replica[6];
int gate_replica_tableId(){return 446;};
__int8 gate_open_ready_minute;
__int8 sun_gate_open_hour[12];
__int8 sun_gate_open_minute[12];
char Pad1[1];
__int16 sun_gate_open_duration[12];
__int8 sun_zone_open_hour;
__int8 sun_zone_open_minute;
__int8 sun_zone_close_hour;
__int8 sun_zone_close_minute;
__int8 mon_gate_open_hour[12];
__int8 mon_gate_open_minute[12];
__int16 mon_gate_open_duration[12];
__int8 mon_zone_open_hour;
__int8 mon_zone_open_minute;
__int8 mon_zone_close_hour;
__int8 mon_zone_close_minute;
__int8 tue_gate_open_hour[12];
__int8 tue_gate_open_minute[12];
__int16 tue_gate_open_duration[12];
__int8 tue_zone_open_hour;
__int8 tue_zone_open_minute;
__int8 tue_zone_close_hour;
__int8 tue_zone_close_minute;
__int8 wed_gate_open_hour[12];
__int8 wed_gate_open_minute[12];
__int16 wed_gate_open_duration[12];
__int8 wed_zone_open_hour;
__int8 wed_zone_open_minute;
__int8 wed_zone_close_hour;
__int8 wed_zone_close_minute;
__int8 thu_gate_open_hour[12];
__int8 thu_gate_open_minute[12];
__int16 thu_gate_open_duration[12];
__int8 thu_zone_open_hour;
__int8 thu_zone_open_minute;
__int8 thu_zone_close_hour;
__int8 thu_zone_close_minute;
__int8 fri_gate_open_hour[12];
__int8 fri_gate_open_minute[12];
__int16 fri_gate_open_duration[12];
__int8 fri_zone_open_hour;
__int8 fri_zone_open_minute;
__int8 fri_zone_close_hour;
__int8 fri_zone_close_minute;
__int8 sat_gate_open_hour[12];
__int8 sat_gate_open_minute[12];
__int16 sat_gate_open_duration[12];
__int8 sat_zone_open_hour;
__int8 sat_zone_open_minute;
__int8 sat_zone_close_hour;
__int8 sat_zone_close_minute;
__int8 required_level_min;
__int8 required_level_max;
__int16 required_faction_score;

		static TableVersion Version() { return TableVersion(0, 18); }
		static __int16 TableId() { return 161; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		guild_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_battle_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}