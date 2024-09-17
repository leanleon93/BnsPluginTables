/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct battle_royal_field_Record : DrEl
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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};
__int8 required_level;
__int8 required_mastery_level;
__int8 required_member_count_party_mode_matching;
__int8 required_party_count_party_mode_matching;
Data::TableRef available_party_mode_matching_weekly_time;
int available_party_mode_matching_weekly_time_tableId(){return 431;};
__int16 waiting_duration_second;
char Pad0[2];
__int32 stand_by_duration;
__int32 waiting_time_before_combat;
Data::TableRef group;
int group_tableId(){return 16;};
__int32 waiting_time_before_move;
Data::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId(){return 452;};
Data::TableRef extra_skill_context_script;
int extra_skill_context_script_tableId(){return 74;};
bool enable_infinite_hyper_energy;
char Pad1[3];
__int32 waiting_time_before_start;
float camera_max_distance;
float start_condition_guide_timer_delay;
float survivor_escape_delay;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 21); }
		static __int16 TableId() { return 32; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battle_royal_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}